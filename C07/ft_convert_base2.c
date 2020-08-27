/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 12:39:37 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/23 22:16:14 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	convert_base(char str, char *base)
{
	int j;

	j = 0;
	while (str != base[j] && base[j])
		j++;
	if (str == base[j])
		return (j);
	return (-1);
}

int	atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int len_base;
	int returned;

	returned = 0;
	len_base = str_len(base);
	sign = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && convert_base(str[i], base) != -1)
	{
		returned = returned * len_base + convert_base(str[i], base);
		i++;
	}
	return (returned * sign);
}

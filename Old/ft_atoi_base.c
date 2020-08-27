/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:54:33 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/20 00:04:46 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_len_base(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	check_base(char c, char *base)
{
	int j;

	j = 0;
	while (c != base[j] && base[j])
	{
		j++;
	}
	if (c == base[j])
		return (j);
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int returned;
	int sign;
	int len_base;

	len_base = ft_len_base(base);
	sign = 1;
	i = 0;
	returned = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
			(str[i] == '\f') || (str[i] == '\r') || (str[i] == '\v'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (check_base(str[i], base) != -1)
	{
		returned = returned * len_base + check_base(str[i], base);
		i++;
	}
	return (returned * sign);
}

int	main(void)
{
	char test[] = " \t  +--++--++cc+789g342Rdf";
	char base[] = "0123456789abcdef";
	printf("%d", ft_atoi_base(test, base));
	
}

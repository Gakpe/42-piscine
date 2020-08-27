/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 14:26:45 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/21 14:53:00 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int resultat;

	resultat = 0;
	sign = 1;
	i = 0;
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			{
				sign = sign * -1; 	
			}
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			resultat = resultat * 10 + str[i] - '0';
			i++;
		}
	return (resultat * sign);
}

int	main(void)
{
	printf("%d", ft_atoi(""));
}

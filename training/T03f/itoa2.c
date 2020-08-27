/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 15:32:50 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/27 16:45:58 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
	unsigned int nombre;
	unsigned int nombre2;
	char			*dest;

	int i;

	nombre	= (nbr > 0) ? nbr	: -nbr;
	nombre2	= (nbr > 0) ? nbr	: -nbr;
	i		= (nbr > 0) ? 1		: 2;

	while (nombre >= 10)
	{
		nombre = nombre / 10;
		i++;
	}

	if(!(dest = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);

	while (i--)
	{
		dest[i] = nombre2 % 10 + '0';
		nombre2 = nombre2 / 10;
	}
	
	(nbr < 0) ? dest[i + 1] = '-' : 0;
	return (dest);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s", ft_itoa(-62));
}

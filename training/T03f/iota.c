/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iota.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 14:29:30 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/27 16:44:11 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *itoa(int nbr)
{
	int i;
	char *dest;
	unsigned int nombre;
	unsigned int nombre2;


	nombre = (nbr > 0) ? nbr : -nbr;
	nombre2 = (nbr > 0) ? nbr : -nbr;
	i = (nbr > 0) ? 1 : 2;

	while (nombre >= 10)
	{
		nombre = nombre / 10;
		i++;
	}

	if(!(dest = (char *)malloc(sizeof(char) * (i)))) // pq pas juste i ?
		return (NULL);
	dest[i] = '\0';

	while (i--)
	{
		dest[i] = nombre2 % 10 + '0';
		nombre2 = nombre2 / 10;
	}
	printf("i est a la position %d\n", i);
	(nbr < 0) ? dest[i + 1] = '-' : 0;
	return (dest);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s", itoa(62));
}

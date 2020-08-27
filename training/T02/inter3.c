/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 11:55:55 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/21 14:26:32 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}


void ft_union(char *s1, char *s2)
{	
	int tab[200];
	int i;

	i = 0;
	while (i <= 200)
	{
		tab[i] = 0;
		i++;
	}

	i = 0;
	while (s2[i])
	{
		if (tab[(int)s2[i]] == 0)
			tab[(int)s2[i]] = 1;
		i++;
	}

	i = 0;
	while (s1[i])
	{
		if (tab[(int)s1[i]] == 1)
		{
			tab[(int)s1[i]] = 3;
			write(1, &s1[i], 1);
		}
		i++;
	}
}


int	main( int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}

	putchar('\n');
	return (0);
}

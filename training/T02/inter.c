/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:51:25 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/19 23:54:26 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar( char c)
{
	write(1, &c, 1);
}

void ft_inter(char *s1, char *s2)
{
	int i;
	int j;
	int tab[127];

	i = 0;
	while (i < 127)
	{
		tab[i] = 0;
		i ++;
	}
	
	i = 0;
	while(s1[i])
	{
		if (tab[s1[i]] == 0)
		{
			tab[s1[i]] = 1;
			write(1, &s1[i], 1);
		}
		i++;
	}

	i = 0;
	while (s2[i])
	{
		if (tab[s2[i]] == 0)
		{
			tab[s2[i]] = 1;
			write(1, &s2[i], 1);
		}
		i++;
	}
}	

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if(argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}

	write(1, "\n", 1);
	return (0);
}

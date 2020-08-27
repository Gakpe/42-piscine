/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 20:01:54 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/20 20:33:34 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int tab[200];

	i = 0;
	while ( i < 200)
	{
		tab[i] = 0;
		i++;
	}

	i = 0;
	while (s1[i])
	{
		if (tab[(int)s1[i]] == 0)
		{	
			tab[(int)s1[i]] = 1;
			ft_putchar(s1[i]);
		}
		i++;
	}

	i = 0;
	while (s2[i])
	{
		if (tab[(int)s2[i]] == 0)
		{	
			tab[(int)s2[i]] = 1;
			ft_putchar(s2[i]);
		}
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);	
	write(1, "\n", 1);
	return (0);

}

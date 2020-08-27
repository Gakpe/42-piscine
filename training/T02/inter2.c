/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 23:29:59 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/19 23:58:04 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_inter(char *s1, char *s2)
{
	int i; 
	int tab[127];

	i = 0;
	while (i < 127)
	{
		tab[i] = 0;
		i++;
	}

	i = 0;
	while((int)s2[i])
	{
		tab[(int)s2[i]] = 1;
		i++;
	}

	i = 0;
	while ((int)s1[i])
	{
		if(tab[(int)s1[i]] == 1)
		{
			tab[(int)s1[i]] = 2;
			write(1, &s1[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}

	write(1,"\n", 1);
}

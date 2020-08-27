/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 14:50:45 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/21 15:12:53 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	int tab[200];

	if (argc == 3)
	{
		i = 0;
		while (i < 200)
		{
			tab[i] = 0;
			i++;	
		}

		i = 0;
		while (argv[2][i])
		{
			tab[(int)argv[2][i]] = 1;
			i++;
		}

		while (argv[1][i])
		{
			if (argv[1][i] == 1)

			
		}	
		


	}
	ft_putchar('\n');
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 10:56:52 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/14 11:30:04 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		lenght(char **argv)
{
	int i;

	i = 0;
	while (argv[1][i])
		i++;
	return (i);
}

void	print_rev(char **argv)
{
	int j;

	j = lenght(argv);
	while(j >= 0)
	{
		write(1, &argv[1][j], 1);
		j--;
	}	
}

int		main(int argc, char **argv)
{
	(void) argc;

	if (argc == 2) 
	{
		print_rev(argv);
	}
	write(1, "\n", 1);
	return (0);
}

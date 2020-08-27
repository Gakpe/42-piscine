/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 14:44:46 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/26 15:15:15 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{	
		int i;

		i = 0;
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i])
			i++;
		while(!(argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}

	write(1, "\n", 1);
	return (0);

}
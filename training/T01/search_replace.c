/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:08:22 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/14 13:22:25 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;

	if (argc == 4)
	{
		i = 0;
		while (argv[1][i])
		{	
			if (argv[1][i] == argv[2][0])
				putchar(argv[3][0]);
			else
				putchar(argv[1][i]);
			i++;
		}
	}	

	write(1, "\n", 1);
	return(0);

}

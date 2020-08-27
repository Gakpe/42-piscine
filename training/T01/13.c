/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:39:09 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/14 13:20:09 by jgakpe           ###   ########.fr       */
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

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				putchar(argv[1][i] + 13);

			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				putchar(argv[1][i] - 13);
			else
			{  	
				putchar(argv[1][i]);
			}
			i++;
		}

	}

	putchar('\n');
	return (0);
}

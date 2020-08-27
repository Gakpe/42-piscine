/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 11:41:13 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/21 11:51:49 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putchar_repeat(char c)
{
	int i;

	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		while (c - 'a' - i >= 0)
		{
			write(1, &c, 1);
			i++;
		}
	}

	if (c >= 'A' && c <= 'Z')
	{
		while (c - 'A' - i >= 0)
		{
			write(1, &c, 1);
			i++;
		}
	}

}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			putchar_repeat(av[1][i]);
			i++;
		}
	}

	putchar('\n');
	return (0);
}

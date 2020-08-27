/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 11:48:27 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/21 10:30:09 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void put_char(char c)
{
	write(1, &c, 1);
}

void put_nbr(int nb)
{
	if (nb < 0)
	{
		put_char('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		put_nbr(nb / 10);
		put_nbr(nb % 10);
	}
	else
		put_char(nb + '0');

}

int	main(void)
	
{
	int i;

	i = 0;
	while (i <= 100)
	{	
		if (i % 5 == 0)
			write(1, "fizz", 4);
		if (i % 3 == 0)
			write(1, "buzz", 4);
		else
			put_nbr(i);
		write(1, "\n", 1);
		i++;
	}
	
}

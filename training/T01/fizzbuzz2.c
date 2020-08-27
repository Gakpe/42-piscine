/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 10:14:00 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/21 11:26:30 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void putnbr(int nb)
{
	if (nb < 0)
	{
		putchar ('-');
		nb = nb * -1;
	}

	if (nb >= 10)
	{
		putnbr( nb / 10);
		putnbr( nb % 10);
	}
	else
		putchar(nb + '0');
}


int main(void)
{
	int i;

	i = 0;
	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{	write(1,"fizzbuzz", 8);
			i++;
			putchar('\n');
		}
		if ( (i % 3 == 0) && (i % 5 != 0) )
		{	write(1,"fizz", 4);
			i++;
			putchar('\n');
		}
		if ( (i % 5 == 0) && (i % 3 != 0) )
		{	write(1,"buzz", 4);
			i++;
			putchar('\n');
		}
		else
		{
			putnbr(i);
			i++;
			putchar('\n');
		}

	}
	return(1);
}

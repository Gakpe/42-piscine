/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:40:31 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/27 14:45:53 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
# define ps(a) printf("%s", a);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	 is_prime(int nbr)
{
	int i;

	i = 2;
	if (nbr <= 1)
		return (0);
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int i;
	int resultat;
	
	i = 0;
	resultat = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + str[i] - 48;
		i++;
	}
	return (resultat);
}

void putnbr(int nbr)
{
	int sign;

	sign = 1;
	if (nbr < 0)
	{
		sign = sign * -1;
		nbr = -nbr;
	}

	if (nbr >= 10)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int	main(int argc, char **argv)
{
	int i;
	int nbr;
	int somme;
	
	if (argc == 2 && argv[1] >= 0)
	{
		somme = 0;
		i = 0;
		nbr = ft_atoi(argv[1]);
		while (i <= nbr)
		{
			if (is_prime(i) == 1)
			{
				printf("is prime %d\n", i);
				somme += i;
			}
			i++;
		}
		putnbr(somme);
	}
	else 
		write(1,"0", 1);
	write(1, "\n", 1);
	return (0);
}

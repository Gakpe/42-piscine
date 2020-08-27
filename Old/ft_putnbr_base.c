/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 09:30:39 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/19 23:59:57 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		lenght(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	affichage(char c)
{
	write(1, &c, 1);
}

int		check_base(char *base)
{
	int i;
	int j;
	int lenght_base;

	lenght_base = lenght(base);
	i = 0;
	while (base[i])
	{
		if (lenght_base == 0 || lenght_base == 1 || base[i] == '+' ||
				base[i] == '-')
			return (0);
		j = i + 1;
		while (base[i] != base[j] && base[j])
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			lenght_base;
	long int	nombre;

	nombre = (long int)nbr;
	i = 0;
	lenght_base = lenght(base);
	if (check_base(base) == 1)
	{
		if (nombre < 0)
		{
			write(1, "-", 1);
			nombre = nombre * -1;
		}
		if (nombre >= lenght_base)
		{
			ft_putnbr_base(nombre / lenght_base, base);
			ft_putnbr_base(nombre % lenght_base, base);
		}
		else 
			affichage(base[nombre]);
	}
}

int	main(void)
{
	ft_putnbr_base(-1465778985, "0123456789");
}

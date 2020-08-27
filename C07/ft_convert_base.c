/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 13:53:25 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/26 11:24:56 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		str_len(char *str);
int		convert_base(char str, char *base);
int		atoi_base(char *str, char *base);

int		check_base(char *base)
{
	int i;
	int j;
	int lenght_base;

	lenght_base = str_len(base);
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

int		check_len_nbase(int nbr, char *base_to)
{
	int			n;
	int			nb;

	nb = 0;
	n = 0;
	if (nbr < 0)
		nb = nbr * -1;
	while (nb > 0)
	{
		nb = nb / str_len(base_to);
		n++;
	}
	if (nbr < 0)
		return (n + 1);
	else
		return (n);
}

char	*ft_itoa_base(int nombre, char *base_to, int lenght_base)
{
	unsigned int	nb;
	unsigned int	nb2;
	int				i;
	char			*dest;

	i = 0;
	nb = (nombre >= 0) ? nombre : -nombre;
	nb2 = (nombre >= 0) ? nombre : -nombre;
	i = (nombre >= 0) ? 1 : 2;
	while (nb2 / lenght_base >= 1)
	{
		nb2 = nb2 / lenght_base;
		i++;
	}
	dest = (char *)malloc(sizeof(char) * (i + 1));
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = base_to[nb % lenght_base];
		nb = nb / lenght_base;
	}
	(nombre < 0) ? dest[i + 1] = '-' : 0;
	return (dest);
}

char	*ft_putnbr_base(int nbr, char *base_to)
{
	int			lenght_base;
	long int	nombre;
	int			n;

	n = check_len_nbase(nbr, base_to);
	nombre = (long int)nbr;
	lenght_base = str_len(base_to);
	if (check_base(base_to) == 1)
	{
		return (ft_itoa_base(nombre, base_to, lenght_base));
	}
	return (NULL);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		int_nombre;
	char	*int_nombre_new_base;

	int_nombre = atoi_base(nbr, base_from);
	int_nombre_new_base = ft_putnbr_base(int_nombre, base_to);
	return (int_nombre_new_base);
}

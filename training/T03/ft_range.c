/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:36:17 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/21 16:14:26 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int i;
	int j;
	int len;
	len = start - end;

	int *dest;

	if (len < 0)
		len = len * -1;

	len = len + 1;

	if (!(dest =(int*)malloc(sizeof(int) * len)))
		return NULL;

	if (start < end)
	{
		i = 0;
		j = start;
		while (len >= 0)
		{
			dest[i] = j;
			printf("%d\n", dest[i]);
			i++;
			j--;
			len--;
		}
	}

	if (end < start)
	{
		i = 0;
		j = start;
		while (len > 0)
		{
			dest[i] = j;
			printf("%d\n", dest[i]);
			i++;
			j--;	
			len--;
		}
	}
	return (dest);
}
int	main(void)
{
	ft_range(-3, 0);
}

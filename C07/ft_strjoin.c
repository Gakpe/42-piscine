/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:14:37 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/25 23:15:23 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len_strs(char **strs, int size)
{
	int i;
	int j;
	int c;

	c = 0;
	i = 1;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			c++;
			j++;
		}
		i++;
	}
	return (c);
}

int		len_sep(char *sep)
{
	int i;

	i = 1;
	while (sep[i])
		i++;
	return (i);
}

int		len_global(int size, char **strs, char *sep)
{
	int len_global;

	len_global = len_strs(strs, size) + (len_sep(sep) * (size - 1));
	return (len_global);
}

char	*joining(int size, char **strs, char *sep, char *concat)
{
	int		j;
	int		i;
	int		d;
	int		s;
	int		count;

	count = 0;
	d = 0;
	i = -1;
	if (size == 0)
		return ("");
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			concat[d++] = strs[i][j];
		s = -1;
		while (sep[++s] && count < (size - 1))
			concat[d++] = sep[s];
		count++;
	}
	concat[d] = '\0';
	return (concat);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	int		len_g;

	len_g = len_global(size, strs, sep);
	if(!(concat = (char *)malloc(sizeof(char) * (len_g + 1))))
		return (NULL);
	concat = joining(size, strs, sep, concat);
	return (concat);
}

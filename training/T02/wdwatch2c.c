/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdwatch2c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:02:51 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/21 15:32:55 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define ps(a) printf("%s", a) 

int ft_len(char *str)
{	
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}


char *wdwatch(char *s1, char *s2)
{
	int i;
	int j;
	int len;
	len = ft_len(s1);

	j = 0;
	i = 0;

	while (s2[i])
	{
		if (s2[i] == s1[j])
		{
			j++;
		}
		i++;
	}
	if (j == len)
		return (s1);
	else 
		return NULL;
}

int	main(int argc, char **argv)
{
	if (argc == 3) 
	{
		printf("%s", wdwatch(argv[1], argv[2]));
	}
	write(1, "\n", 1);
	return (0);
}

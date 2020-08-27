/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 16:14:55 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/21 16:43:14 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define ps(a) printf("%s", a)

int	str_len(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

void last_word(char *s1)
{
	int i;
	int len;

	len = str_len(s1);

	i = 0;
	while ((s1[len] == ' ') || (s1[len] == '\t'))
		len--;
	while (!((s1[len] == ' ') || (s1[len] == '\t')))
	{
		len--;
		i++;
	}
	while (i > 0)
	{	
		write(1, &s1[len],1);
		len++;
		i--;
	}
}
int main()
{
	last_word(" yooo comment cav a");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   training.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 22:53:45 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/14 12:35:30 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void  repeat(char *str)
{

	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] - 'a' - j >= 0)
		{
			write(1, &str[i], 1);
				j++;
		}
	j = 0;	
	i++;	
	}
}

int	main(void)
{
	repeat("ok gros");
}

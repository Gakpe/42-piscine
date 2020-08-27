/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 22:20:46 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/19 22:58:35 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define ps(a) printf("%s", a)

char *ft_ulstr(char *str)
{	
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;

		if  (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	write(1,"\n", 1);
	return (str);
}
int	main()
{
	char test[] = "He8678llOooo";
	printf("%s", ft_ulstr(test));
}

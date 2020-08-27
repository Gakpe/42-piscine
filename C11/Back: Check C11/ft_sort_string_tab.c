/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 16:45:34 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/25 18:33:31 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
# define ps(a) printf("%s", a);

void	ft_putstr( char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1 == NULL)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if ((s1[i] - s2[i]) > 0)
	{
		return (1);
	}
	else
		return (0);
}

void	ft_sort_string_tab( char **argv)
{
	int		i;
	int		j;
	char	*swp;

	i = 1;
	if (argv == 0)
		 return ;
	while (argv[i + 1])
	{
		if (ft_strcmp(argv[i], argv[i + 1]))
		{
			swp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swp;
			i = 0;
		}
		i++;
	}
	ft_putstr(argv);
}

int		main(int argc, char **argv)
{
	ft_sort_string_tab(argv);
}

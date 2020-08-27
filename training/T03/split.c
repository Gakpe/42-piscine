/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:26:52 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/20 18:47:50 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#define ps(a) printf("%s", a)


int count_words(char *str, int *tab)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (tab[(int)str[i]] == 1)
			i++;
		while (tab[(int)str[i]] == 0)
			i++;
		count++;
		while (tab[(int)str[i]] == 1)
			i++;
	}

	printf("%d\n", count);
	return (count);
}

int	count_char (char *str, int *tab, char **dest)
{
	int i;
	int c;
	int n;


	i = 0;
	c = 0;
	n = 0;
	
		ps("yo");
	while (str[i])
	{
		ps("yo");
		while (tab[(int)str[i]] == 1)
			i++;
		c = 0;
		while (tab[(int)str[i]] == 0)
		{
			i++;
			c++;
		}
		dest[n] = malloc(sizeof(char) * c);
		printf("le mot %d a %d mot", n, c);	
		n++;
	}
	return (c);
}

char ** ft_split(char *str, char *charset)
{
	return (NULL);
}

int	main(int argc, char **argv)
{
	int i;
	int nb_words;
	int tab[200];
	char *str = argv[1];
	char *charset = argv[2];
	char **dest;


	i = 0;
	while (i < 200)
	{
		tab[i] = 0;
		i++;
	}

	i = 0;
	while (charset[i])
	{
		tab[(int)charset[i]] = 1;
		i++;
	}
	nb_words = 0;
	// Compter le noimbre de mots
		ps("hello");
	nb_words = count_words(argv[2], tab);
	// allouer le nombre de ligne necessair
		ps("AZERTY");
	dest = malloc(sizeof(char *) * (nb_words + 1));
	// compter le nombre de char
	
		ps("yo");
	count_char(argv[1], tab, dest);
	// Alouer la place necessaire 
}

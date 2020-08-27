/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:42:57 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/23 18:12:11 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str, int *tab, char *charset)
{
	int i;
	int count;

	count = 0;
	i = 0;
	if (charset[0] == '\0')
		return (1);

	while (str[i] != '\0' )
	{
		while (tab[(int)str[i]] == 1)
			i++;
		while (tab[(int)str[i]] == 0)
			i++;
		count++;
		while (tab[(int)str[i]] == 1)
			i++;
	}
	return (count);
}
void	counts_char(char *str, int nb_words, int *tab, char **dest)
{
	int i;
	int c;
	int n;

	n = 0;
	i = 0;
	while (n <= nb_words)
	{
		while (tab[(int)str[i]] == 1)
			i++;
		c = 0;
		while (tab[(int)str[i]] == 0 && str[i])
		{
			i++;
			c++;
		}
		dest[n] = (char*)malloc(sizeof(char) * (c + 1));
		n++;
		while (tab[(int)str[i]] == 1 && str[i])
			i++;
	}	
}
char	**ft_strdup(char *str, char **dest, int nb_words, int *tab)
{
	int i;
	int j;
	int n;

	i = 0;
	n = 0;
	while (n <= nb_words)
	{
		while (tab[(int)str[i]] == 1)
			i++;
		j = 0;
		while (tab[(int)str[i]] == 0 && str[i])
		{
			dest[n][j] = str[i];
			i++;
			j++;
		}
		dest[n][j] = '\0';
		n++;
	}

	dest[nb_words] = NULL;
	return (dest);
}
char **ft_split(char *str, char *charset)
{

	int i;
	int nb_words;
	char **dest;
	char **split;
	int tab[127];

	i = 0;
	while (i < 127)
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
	nb_words = count_words(str, tab, charset);
	dest = (char **)malloc(sizeof(char*) * (nb_words + 1));	
	counts_char(str, nb_words, tab, dest); 
	split = ft_strdup(str, dest, nb_words, tab);
	return (split);
}
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s", ft_split(argv[1], argv[2]);

}

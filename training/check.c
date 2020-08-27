

#include <unistd.h>

void putstr(char *str)
{
	unsigned int i;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
void putargv(int ac, char **av)
{
	int i;
	i = 1;
	while (i < ac - 1)
	{
		putstr(av[i]);
		write(1, "\n",1);
		i++;
	}
	putstr(av[i]);
}
int	ft_strmin(char *s1, char *s2)
{
	unsigned int i;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if(s1[i] - s2[i] > 0)
		return (1);
	return (0);
}
int main(int ac, char **av)
{
	int i;
	char *tmp;
	int j;
	i = 1;
	j = 2;
	while (i < ac - 1)
	{
		while (j < ac)
		{
			if (ft_strmin(av[i], av[j]) == 1)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putargv(ac, av);
	return (0);
}

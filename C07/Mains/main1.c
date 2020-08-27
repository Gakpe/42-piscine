#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *tab;
	int *tab2;
	int *tab3;
	int i;

	tab = ft_range(-6, -1);
	tab2 = ft_range(0, 10);
	tab3 = ft_range(20, 10);

	printf("\033[1;31m");
	printf("Expected results :\n");
	printf("\033[0m");
	printf("5 6 7 8 9\n");
	printf("0 1 2 3 4 5 6 7 8 9\n");
	printf("\n");

	printf("\033[1;31m");
	printf("Your results :\n");
	printf("\033[0m");
	i = 0;
	while(i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
		i = 0;
	while(i < 10)
	{
		printf("%d ", tab2[i]);
		i++;
	}
	printf("\n");
	printf("\n");
	return (0);
}

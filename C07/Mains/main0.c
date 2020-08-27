#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main()
{
	char *tab1 = "Bonjour toi";
	char *tab2 = "hello world!";
	char *tab3 = "";
	char *tab4 = "this is a test";

	printf("\033[1;31m");
	printf("Expected results :\n");
	printf("\033[0m");
	printf("%s\n", strdup(tab1));
	printf("%s\n", strdup(tab2));
	printf("%s\n", strdup(tab3));
	printf("%s\n", strdup(tab4));
	printf("\033[1;31m");
	printf("Your results :\n");
	printf("\033[0m");
	printf("%s\n", ft_strdup(tab1));
	printf("%s\n", ft_strdup(tab2));
	printf("%s\n", ft_strdup(tab3));
	printf("%s\n", ft_strdup(tab4));

}
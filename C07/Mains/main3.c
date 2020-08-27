#include <stdio.h>

char		*ft_strjoin(int size, char **strs, char *sep);

int			main()
{
	char *strings[2] = {"Bonjour", "toi !"};
	char *sep = "123";
	char *result;

	result = ft_strjoin(2, strings, sep);

	char *strings2[3] = {"Hello", "World", "helooo"};
	char *sep2 = "|||||";
	char *result2;

	result2 = ft_strjoin(3, strings2, sep2);


	printf("\033[1;31m");
	printf("Expected results :\n");
	printf("\033[0m");
	printf("\n");

	printf("Bonjour123toi !\n");
	printf("Hello42aWorld42a!cs\n");

	printf("\033[1;31m");
	printf("Your results :\n");
	printf("\033[0m");
	printf("\n");

	printf("%s\n", result);
	printf("%s\n", result2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgakpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 13:44:20 by jgakpe            #+#    #+#             */
/*   Updated: 2020/08/15 16:21:18 by jgakpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_is_numerical(char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while(argv[j])
	{
		if ((argv[j][0] >= '1' && argv[j][0] <= '4') || argv[j][0] == 32) 
			j++;
		else 
			return (0);
	}
	return (1);
}


/*


void	display(int grid)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i <= 4)
	{		
		j = 0;
		while (j <= 4)
			{
				write(1, grid[i][j], 1);
				if ( i < 3)
					write(1, " ", 1);
				j++;
			}

		write(1, "\n", 1);	
		i++;
	}
}
*/


int grid(void)

{	
	char test[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char **grid;

	int grid[4][4] = {{0,1,2,3} , {4,5,6,7} {8,9,10,11} {0,0,2,4}};	
	int j;
	int i;
	int n;


	i = 0;
	n = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = test[n];
			j++;
			n++;
		}
		i++;
	}
	return (grid);
}


int		main(int argc, char **argv)
{

	int grid[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

	printf("%d", grid[0][2]);

	if (argc == 17 && ft_is_numerical(argv) == 1)
	{		

	}
	else 
		write(1, "Error", 5);

	return (0);
}

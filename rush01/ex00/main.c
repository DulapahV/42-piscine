#include "rush01.h"
#include <stdlib.h>

int	error(void);  // print error message and quit
void	ft_destroy_tab(int **tab, int size);  // free memory allocated

/*
1. Declare variable size and 2D table.
2. Assign size to 4 and table to null
3. Check if user input correct amount of argument (2)
4. Parse input and check whether it is valid or not

*/

int	main(int argc, char **argv)
{
	int	size;
	int	**table;

	table = NULL;
	size = 4;
	if (argc != 2)
		return(error());
	if (is_input_valid(argv[1], size))
		return(error());
	table = ft_init(size, argv[1]);
	if (table != NULL)
	{
		ft_solve(table, 1, 1, size);
		if (table[size][size] != 0)
			ft_show(table, size);
		else
			return (error());
		ft_destroy_tab(table, size);
		return (0);
	}
	return (error());
}

int	error(void)
{
	ft_putstr("Error\n");
	return (0);
}

void	ft_destroy_tab(int **tab, int size)
{
	while (size--)
		free(tab[size]);
	free(tab);
	return ;
}
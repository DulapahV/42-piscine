#include "rush01.h"
#include <stdlib.h>

int	**ft_init(int size, char *argv);
int	ft_init_line(int **table, int size, char *argv);
int	ft_init_column(int **table, int size, char *argv);
int	ft_init_fill(int **table, int size);

/*
1. Malloc 2D array with (size + 2) * (size + 2). Size + 2 because of the 2 constraints at each side.

*/

int	**ft_init(int size, char *argv)
{
	int	**table;
	int	a;

	a = 0;
	table = malloc(sizeof(int *) * (size + 2));
	while (a < size + 2)
		table[a++] = malloc(sizeof(int *) * (size + 2));
	if (ft_init_line(table, size, argv)
		&& ft_init_column(table, size, argv)
		&& ft_init_fill(table, size))
		return (table);
	return (NULL);
}

int	ft_init_line(int **table, int size, char *argv)
{
	int	a;
	int	b;
	int	n;

	a = 0;
	b = 1;
	n = 1;
	while (b <= size)
		table[a][b++] = ft_getarg(argv, n++);
	b = 1;
	a = (size + 2) - 1;
	while (b <= size)
		table[a][b++] = ft_getarg(argv, n++);
	return (1);
}

int	ft_init_column(int **table, int size, char *argv)
{
	int	a;
	int	b;
	int	n;

	a = 1;
	b = 0;
	n = size * 2 + 1;
	while (a <= size)
		table[a++][b] = ft_getarg(argv, n++);
	b = (size + 2) - 1;
	a = 1;
	while (a <= size)
		table[a++][b] = ft_getarg(argv, n++);
	return (1);
}

int	ft_init_fill(int **table, int size)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (a < size)
	{
		while (b <= size)
			table[a][b++] = 0;
		b = 1;
		a++;
	}
	return (1);
}
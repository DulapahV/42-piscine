#include "rush01.h"

void	ft_show(int **tab, int size)
{
	int	a;
	int	b;
	int	corner;

	corner = 1;
	a = 0 + corner;
	b = 0 + corner;
	while (a < size + 2 - corner)
	{
		while (b < size + 2 - corner)
		{
			ft_putnbr(tab[a][b++]);
			if (b < size + 2 - corner)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		b = 0 + corner;
		a++;
	}
	return ;
}

#ifndef RUSH01_H
# define RUSH01_H

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		is_input_valid(char *str, int size);
int		ft_getarg(char *str, int nb);
int		ft_is_num(char c);
int		**ft_init(int size, char *argv);
void	ft_show(int **tab, int size);
void	ft_putnbr(int nb);
int		ft_check(int **grid, int size, int x, int y);
int		ft_solve(int **tab, int x, int y, int size);

#endif

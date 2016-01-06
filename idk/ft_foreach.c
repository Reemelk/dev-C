#include "ft.h"

void	ft_foreach(int *tab, int length, void(*f)(int))
{
  int	i;

  i = 0;
  while (length > 0)
    {
      f(tab[i]);
      ft_putchar('\n');
      ++i;
      --length;
    }
}

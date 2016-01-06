#include "ft.h"

void	ft_sort_integer_table(int *tab, int size)
{
  int	i;

  i = 0;
  while (size > 0)
    {
      if (tab[i] > tab[i + 1])
	ft_swap(&(tab[i]), &(tab[i + 1]));
      ++i;
      --size;
    }
}

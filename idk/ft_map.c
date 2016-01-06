#include "ft.h"
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
  int	*stock;
  int	i;

  i = 0;
  stock = malloc(sizeof(int *) * length);
  while (length > 0)
    {
      stock[i] = f(tab[i]);
      ++i;
      --length;
    }
  return (stock);
}

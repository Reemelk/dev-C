#include <stdlib.h>
#include "ft.h"

int	inf_base(int mod, char *base)
{
  int	i;

  i = 10;
  while (i < ft_strlen(base))
    {
      if (mod == i)
	return (i + 7); // diff entre 9 et A 
      ++i;
    }
  return (mod);
}

void	ft_putnbr_base(int nbr, char *base)
{
  char	*stock;
  char	s;
  int	div;
  int	mod;
  int	i;
  int	k;
  int	j;  

  i = 0;
  k = 0;
  j = nbr;
  while (j >= ft_strlen(base))
    {
      j = j / ft_strlen(base);
      ++i;
    }
  div = nbr;
  stock = malloc(sizeof(*stock) * (i + 2)); // 1 pour div & 1 pour \0
  while (div >= ft_strlen(base))
    {
      div = nbr / ft_strlen(base);
      mod = nbr % ft_strlen(base);
      s = inf_base(mod, base) + '0';
      stock[k] = s;
      nbr = div;
      ++k;
    }
  stock[k] = inf_base(div, base) + '0';
  ++k;
  stock[k] = '\0';
  ft_putstr(ft_strrev(stock)); 
}

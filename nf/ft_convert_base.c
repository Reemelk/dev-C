int	ft_strlen(char *str);
char	*ft_strrev(char *str);
int	ft_atoi_base(char *str, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	conver(int c, char *base_to)
{
  if (c < ft_strlen(base_to) && c > 9)
    return (c + 55);
  return (c + '0');
}

int	memoire_alloc(char *nbr, char *base_from, char *base_to)
{
  int	res;
  int	div;
  int	i;

  res = ft_atoi_base(nbr, base_from);
  i = 0;
  while (res >= ft_strlen(base_to))
    {
      div = res / ft_strlen(base_to);
      res = div;
      ++i;
    }
  return i + 2;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
  int   res;
  int   mod;
  int   div;
  char  *stock;
  int   i;

  stock = malloc(sizeof(stock) * memoire_alloc(nbr, base_from, base_to));
  res = ft_atoi_base(nbr, base_from);
  i = 0;
  if (res < ft_strlen(base_to))
    {
      stock[i] = conver(res, base_to);
      return (stock);
    }
  while (res >= ft_strlen(base_to))
    {
      div = res / ft_strlen(base_to);
      mod = res % ft_strlen(base_to);
      stock[i] = conver(mod, base_to);
      res = div;
      ++i;
    }
  stock[i] = conver(div, base_to);
  return (ft_strrev(stock));
}

int	main()
{
  char	nbr[] = "10564";
  char	base_from[] = "01234567";
  char	base_to[] = "01";
  printf("%s", ft_convert_base(nbr, base_from, base_to));
}

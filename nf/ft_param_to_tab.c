#include "ft_stock_par.h"
struct	s_stock_par *ft_param_to_tab(int ac, char **av);

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
  t_stock_par	*idk;
  char	*s;
  int	nb_param;
  int	i;

  nb_param = ac;
  idk = malloc(sizeof(t_stock_par) * (ac + 1));
  i = 0;
  while (nb_param > 0)
    {
      idk[i].size_param = ft_strlen(av[i]);
      idk[i].str = av[i];
      idk[i].copy = ft_strdup(av[i]);
      idk[i].tab = ft_split_whitespaces(av[i]);
      --nb_param;
      ++i;
    }
  return (idk);
}

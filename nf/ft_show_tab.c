#include "ft_stock_par.h"
void	ft_show_tab(struct s_stock_par *par);
struct s_stock_par *ft_param_to_tab(int ac, char **av);

void	ft_show_tab(struct s_stock_par *par)
{
  int	i;
  
  i = 0;
  while (par[i].str != 0)
    {
      ft_putstr(par[i].copy);
      ft_putchar('\n');
      ft_putnbr(par[i].size_param);
      ft_putchar('\n');
      ft_print_words_tables(par[i].tab);
      ft_putchar('\n');
      ft_putstr("------------------\n");
      ++i;
    }
}

int	main(int ac, char **av)
{
  ft_show_tab(ft_param_to_tab(ac, av));
}

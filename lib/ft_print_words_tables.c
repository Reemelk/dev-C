#include "ft.h"

void	ft_print_words_tables(char **tab)
{
  int	i;
  int	j;

  i = 0;
  while (tab[i] != 0)
    {
      j = 0;
      while (tab[i][j] != 0)
	{
	  ft_putchar(tab[i][j]);
	  ++j;
	}
      ft_putchar('\n');
      ++i;
    }
}

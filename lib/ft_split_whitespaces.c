#include <stdlib.h>
#include "ft.h"
////////////////////
int	check_nb_mot(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != 0)
    {
      if (str[i] == ' ' || str[i] == 9 || str[i] == '\n')
	++j;
      ++i;
    }
  return (j + 1);
}
///////////////////////////////////////////
char	**ft_split_whitespaces(char *str)
{
  char	**stock;
  int	nb_mot;
  int	i;
  int	j;
  int	c;

  nb_mot = check_nb_mot(str);
  stock = malloc(sizeof(*stock) * nb_mot);
  i = 0;
  j = 0;
  c = 0;
  ////////////////////////////allocation////////////////////////
  while(str[i] != 0)
    {
      if (str[i] == ' ' || str[i] == 9 || str[i] == '\n' || str[i + 1] == '\0')
	{
	  if (str[i + 1] == '\0')
	    ++j;
	  j = ft_strlen(str) - (ft_strlen(str) - j);
	  stock[c] = malloc(sizeof(stock) * (j + 1)); // +1 pour le \0
	  j = 0;
	  ++c;
	}
      if (str[i] != ' ')
	++j;
      ++i;
    }
  ////////////////////////// *********//////////////////////
  i = 0;
  c = 0;
  j = 0;
  while (nb_mot > 0)
    {
      while (str[i] != ' ')
	{
	  stock[j][c] = str[i];
	  ++c;
	  ++i;
	}
      stock[j][c] = '\0';
      c = 0;
      ++j;
      ++i;
      --nb_mot;
    }
  return (stock);
}

#include "ft.h"

int	ft_atoi(char *str)
{
  int i;
  int resultat;
  int degres;
  int degres2;
  int l;
  int len;

  i = 0;
  resultat = 0;
  degres = 1;
  degres2 = 1;
  l = 0;
  if (str[i] == '-' || str[i] == '+')
    {
      len = ft_strlen(str);
      ++i;
      ++l;
    }
  else
    len = ft_strlen(str);
  while ((i < len) && (str[i] >= '0' && str[i] <= '9'))
    {
      degres = 1 * degres2;
      degres2 = degres2 * 10;
      ++i;
    }
  i = l;
  while (str[i] != 0 && (str[i] >= '0' && str[i] <= '9') )
    {
      resultat = resultat + ((str[i] - 48) * degres);
      degres = degres / 10;
      ++i;
    }
  i = 0;
  if (str[i] == '-')
    resultat = resultat * -1;
  return resultat;
}

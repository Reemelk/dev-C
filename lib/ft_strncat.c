#include "ft.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = ft_strlen(dest);
  j = 0;
  while (nb > 0 && src[j] != 0)
    {
      dest[i] = src[j];
      ++i;
      ++j;
      --nb;
    }
  dest[i] = '\0';
  return (dest);
}

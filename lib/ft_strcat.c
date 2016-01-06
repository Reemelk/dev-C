#include "ft.h"

char    *ft_strcat(char *dest, char *src)
{
  int   i;
  int   j;

  j = 0;
  i = ft_strlen(dest);
  while (src[j] != 0)
    {
      dest[i] = src[j];
      ++i;
      ++j;
    }
  dest[i] = '\0';
  return (dest);
}

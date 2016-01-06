#include <stdlib.h>
#include "ft.h"

char	*ft_strdup(char *src)
{
  char	*stock;

  stock = malloc(sizeof(*stock));
  ft_strcpy(stock, src);
  return (stock);
}

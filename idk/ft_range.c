#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
  int	*tab;
  int	i;
  
  tab = malloc(sizeof(*tab) * (max - min));
  i = 0;  
  if (min >= max)
    return (NULL);
  while (i < (max - min))
    {
      tab[i] = min + i;
      ++i;
    }
  return (tab);
}

int	main()
{
  int	i = 0;
  int *tab;
  tab = ft_range(2, 5);
  while (i < (5-2))
    {
      printf("%d", tab[i]);
      ++i;
    }
}

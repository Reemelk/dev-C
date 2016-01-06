#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
  char	*all_string;
  int	i;
  int	nb_case;

  i = 0;
  nb_case = 0;
  while (i < argc)
    {
      nb_case = nb_case + ft_strlen(argv[i]);
      ++i;
    }
  all_string = malloc(sizeof(*all_string) * (nb_case + (i - 1)));
  i = 1;
  while (i < argc)
    {
      ft_strcat(all_string, argv[i]);
      ft_strcat(all_string, "\n");
      ++i;
    }
  return (all_string);
}

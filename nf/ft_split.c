int     ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strlen(char *str);
char	**ft_split(char *str, char *charset);

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	nbl(char *str, char *charset)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != 0)
    {
      if (ft_strncmp(&(str[i]), charset, ft_strlen(charset)) == 0)
	++j;
      ++i;
    }
  ++j;
  if (ft_strncmp(&(str[0]), charset, ft_strlen(charset)) == 0 && ft_strncmp(&(str[ft_strlen(str) - ft_strlen(charset)]), charset, ft_strlen(charset)) == 0)
    j = j - 2;
  else if (ft_strncmp(&(str[0]), charset, ft_strlen(charset)) == 0 || ft_strncmp(&(str[ft_strlen(str) - ft_strlen(charset)]), charset, ft_strlen(charset)) == 0)
    --j;
  return (j);
}

int	*nb_case_mot(char *str, char *charset)
{
  int size;
  int	*tab;
  int	i;
  int	l;
  int	n;

  size = nbl(str, charset);
  tab = malloc(sizeof(int) * size);
  i = 0;
  l = 0;
  while (size > 0)
    {
      n = 0;
      while (str[i] != 0 && ft_strncmp(&(str[i]), charset, ft_strlen(charset)) != 0)
	{
	  ++n;
	  ++i;
	}
      i = i + ft_strlen(charset);
      tab[l] = n + 1; // +1 pour le /0
      ++l;
      --size;
    }
  return (tab);
}

char	**ft_split(char *str, char *charset)
{
  char	**stock;
  int	*tab;
  int	nb;
  int	l;
  int	i;
  int	c;

  tab = nb_case_mot(str, charset);
  nb = nbl(str, charset);
  stock = malloc(sizeof(char*) * nb);
  i = 0;
  while (i < nb)
    {
      stock[i] = malloc(sizeof(char) * tab[i]);
      ++i;
    }
  l = 0;
  i = 0;
  c = 0;
  while (nb > 0)
    {
      while (str[i] != 0 && str[i] != 0 && ft_strncmp(&(str[i]), charset, ft_strlen(charset)) != 0)
	{
	  stock[l][c] = str[i];
	  ++c;
	  ++i;
	}
      stock[l][c] = '\0';
      ++l;
      c = 0;
      i = i + ft_strlen(charset);
      --nb;
    }
  return (stock);
}

int	main()
{
  char	str[] = "clujlul oijklu gflu";
  char	charset[] = "lu";
  ft_print_words_tables(ft_split(str, charset));
}

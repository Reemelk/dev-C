int	ft_count_if(char **tab, int (*f)(int))
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (tab[i] != 0)
    {
      if (f(tab[i]) == 1)
        ++c;
      ++i;
    }
  return c;
}

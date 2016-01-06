int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
  int	i;

  i = 0;
  while (n > 0)
    {
      if (s1[i] > s2[i])
	return (1);
      else if (s2[i] > s1[i])
	return (-1);
      --n;
      ++i;
    }
  return (0);
}

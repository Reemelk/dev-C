int	ft_strlen(char *str);
int	ft_strncmp(char *dest, char *src, unsigned int n);

char    *ft_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != 0)
    {
      if (str[i] == to_find[0])
	{
	  if ((ft_strncmp(&str[i], to_find, ft_strlen(to_find))) == 0)
	    return (&str[i]);
	}
      ++i;
    }
}

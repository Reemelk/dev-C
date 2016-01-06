char	*ft_strcapitalize(char *str)
{
  int	i;

  i = 0;
  str[0] = str[0] - 32;
  while (str[i] != 0)
    {
      if (str[i] == ' ')
	str[i + 1] = str[i + 1] - 32;
      ++i;
    }
  return (str);
}

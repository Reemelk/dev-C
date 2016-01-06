int	ft_fibonacci(int index)
{
  if (index < -1)
    return -1;
  if (index < 3)
    return index;
  return ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
}

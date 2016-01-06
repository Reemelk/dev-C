int	ft_iterative_factorial(int nb)
{
  int	r;

  r = 1;
  while (nb > 0)
    {
      r = r * nb;
      --nb;
    }
  return r;
}

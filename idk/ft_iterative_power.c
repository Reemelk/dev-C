int	ft_iterative_power(int nb, int power)
{
  int	r;

  r = 1;
  while (power > 0)
    {
      r = r * nb;
      --power;
    }
  return r;
}

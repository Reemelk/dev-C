void	ft_putnbr_base(int nbr, char *base)
{
  if (nb < 0)
    {
      ft_putchar('-');
      nb = -nb;
    }
  if (nb >= ft_strlen(base))
    {
      ft_putnbr_base(nb / ft_strlen(base), base);
      ft_putnbr_base(nb % ft_strlen(base), base);
    }
  else
    {
      ft_putchar(base[nb]);
    }
}


int	main()
{
  char	base[] = "01";
  ft_putnbr_base(5, base);
}

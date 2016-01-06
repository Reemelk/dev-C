#include <unistd.h>

int     ft_putchar(char c)
{
  write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
  int   div;
  int   res;
  int   res2;
  int   snb;

  div = 1;
  snb = nb;
  if (nb < 0)
    nb = nb * -1;
  while (nb / div > 10)
    div = div * 10;
  if (snb < 0)
    ft_putchar('-');
  while (div >= 1)
    {
      res = nb / div;
      res2 = res % 10;
      div = div / 10;
      ft_putchar(res2 + 48);
    }
}

void	ft_ultimate_div_mod(int *a, int *b)
{
  int	resa;
  int	resb;

  resa = a / b;
  resb = a % b;
  *a = resa;
  *b = resb;
}

int	main()
{
  
}

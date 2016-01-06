#include <unistd.h>

int	ft_putchar(char c)
{
  write(1, &c,1);
  return 0;
}

void	ft_print_comb()
{
  int	c;
  int	d;
  int	u;
  int	sd;
  int	su;

  c = 48;
  d = 49;
  u = 50;
  sd = 49;
  su = 50;
  while (c <= 55)
    {
      while (d <= 56)
	{
	  while (u <= 57)
	    {
	      ft_putchar(c);
	      ft_putchar(d);
	      ft_putchar(u);
	      ft_putchar(',');
	      ft_putchar(' ');
	      ++u;
	    }
	  u = 0;
	  ++d;
	  u = d + 1;
	}
      ++su;
      u = su;
      ++sd;
      d = sd;
      ++c;
    }
}

int	main()
{
  ft_print_comb();
}

#include <unistd.h>

int	ft_putchar(char c)
{
  write(1, &c, 1);
  return 0;
}

void	ft_print_comb2()
{
  int	m;
  int	c;
  int	d;
  int	u;
  int	sd;
  int	su;

  m = 48;
  c = 48;
  d = 48;
  u = 49;
  sd = 48;
  su = 49;
  while (m <= 57)
    {
      while (c <= 57)
	{
	  while (d <= 57 && c <= 56)
	    {
	      while (u <= 57)
		{
		  if (m == d && c == u)
		    ++u;
		  else
		    {
		      ft_putchar(m);
		      ft_putchar(c);
		      ft_putchar(d);
		      ft_putchar(u);
		      ft_putchar(',');
		      ft_putchar(' ');
		      ++u;
		    }
		}
	      u = 48;
	      ++d;
	    }
	  d = 48;
	  ++su;
	  u = su + 1;
	  ++c;
	}
      u = 49;
      ++sd;
      d = sd;
      c = 48;
      ++m;
    }
}

int	main()
{
  ft_print_comb2();
}

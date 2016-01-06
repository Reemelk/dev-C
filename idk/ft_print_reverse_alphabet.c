#include <unistd.h>

int	ft_putchar(char c)
{
  write (1, &c, 1);
  return 0;
}

void	ft_print_reverse_alphabet()
{
  int	f;

  f = 122;
  while (f > 96)
    {
      ft_putchar(f);
      --f;
    }
}

int	main()
{
  ft_print_reverse_alphabet();
}

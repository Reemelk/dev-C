#include <unistd.h>

int	ft_putchar(int c)
{
  write(1, &c, 1);
  return 0;
}
void	ft_print_numbers()
{
  int	nb;

  nb = 48;
  while (nb < 58)
    {
      ft_putchar(nb);
      ++nb;
    }
}

int	main()
{
  ft_print_numbers();
}

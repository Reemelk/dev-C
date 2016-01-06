#include "ft.h"

typedef	struct	s_operateur
{
  char	*signe;
  void	(*f_signe)(char **);
}	t_ope;

void	add(char **av)
{
  ft_putnbr(ft_atoi(av[1]) + ft_atoi(av[3]));
}

void	sous(char **av)
{
  ft_putnbr(ft_atoi(av[1]) - ft_atoi(av[3]));
}

void	multi(char **av)
{
  ft_putnbr(ft_atoi(av[1]) * ft_atoi(av[3]));
}

void	div(char **av)
{
  if (ft_atoi(av[3]) == 0)
    {
      ft_putstr("Stop : division by zero");
      return ;
    }
  ft_putnbr(ft_atoi(av[1]) / ft_atoi(av[3]));
}

char	*get_n(char *av)
{
  char	*stock;
  int	i;

  i = 0;
  while (av[i] != 0 || (av[i] >= '0' && av[i] <= '9') || av[0] == '-')
    ++i;
  write(1, &i + 48, 1);
  stock = malloc(sizeof(char) * i);
  stock = ft_strncpy(stock, &av[0], i);
  return (stock);
}

void	do_op(int ac, char **av)
{
  int	i;
  t_ope	sign_func[4];

  sign_func[0].signe = "+";
  sign_func[0].f_signe = &add;
  sign_func[1].signe = "-";
  sign_func[1].f_signe = &sous;
  sign_func[2].signe = "*";
  sign_func[2].f_signe = &multi;
  sign_func[3].signe = "/";
  sign_func[3].f_signe = &div;
  i = 0;
  while (i < 4)
    {
      if (ft_strcmp(av[2], sign_func[i].signe) == 0)
	{
	  sign_func[i].f_signe(av);
	  ft_putchar('\n');
	  return ;
	}
      else if ((ft_str_is_alpha(av[2]) == 1) || (ft_str_is_numeric(av[1]) == 0 && ft_str_is_numeric(av[3]) == 0))
	{
	  ft_putstr("0\n");
	  return ;
	}
      ++i;
    }
}

void	main(int ac, char **av)
{
  ft_putstr(get_n(av[1]));
  //do_op(ac, av);
}

int	main(int argc, char **argv)
{
  int	i;

  i = 0;
  while (argv[i] != 0)
    {
      ft_putstr(argv[i]);
      ft_putchar('\n');
      ++i;
    }
  return 0;
}

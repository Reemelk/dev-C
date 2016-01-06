int	main(int argc, char **argv)
{
  int	i;

  i = argc - 1;
  while (i >= 1)
    {
      ft_putstr(argv[i]);
      ft_putchar('\n');
      --i;
    }
  return 0;
}

#include <unistd.h>

void	ft_put_rev_str(int argc, char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_params(int argc, char **argv)
{
	int i;
	i = 1;
	while (i < argc)
	{
		ft_put_rev_str(argc, argv[argc -i]);
		write(1,"\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}


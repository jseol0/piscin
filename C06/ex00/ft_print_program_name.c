#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_program_name(char **argv)
{
	ft_putstr(argv[0]);
}

int	main(int argc, char **argv)
{
	ft_print_program_name(argv);
	return (0);
}

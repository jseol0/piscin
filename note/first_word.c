#include <unistd.h>

int is_space(char c)
{

	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int pivot;

	if (argc != 2 || argv[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}

	int i = 0;
	while (argv[1][i] != '\0')
	{
		while (is_space(argv[1][i]))
			i++;
		pivot = i;
		while (1)
		{
			if (argv[1][i] == '\0' || is_space(argv[1][i]))
				break;
			i++;
		}
		write(1, argv[1] + pivot, i - pivot);
		write(1, "\n", 1);
		break ;
	}
	return (0);
}

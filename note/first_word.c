#include <unistd.h>

int s(char c)
{
	if (c == 20)
		return (1);
	return (0);
}
int main(int argc, char **argv)
{
	int i = 0;
	int p;
	if (argc! = 2)
		write(1,"\n",1);
	while (s(argv[1][i]))
		i++;
	p = i;
	while(1)
	{
		if (argv[1][i] == '\0' || s(argv[1][i]))
			break;
		i++;
		while (p < i)
		{
			write(1, &argv[1][p], 1);
			p++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;	
}

char    *rev_print(char *str)
{
	char *ret = str;
	int i = 0;
	int size = ft_strlen(ret);

	while (i < size)
	{
		write(1, &ret[size - 1 - i], 1);
		i++;
	}
	return (str);
}

int	main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("Ponies are awesome");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_itoa(int nbr)
{
	char buf[30];
	int i = 0;
	int sign = 1;
	if (nbr < 0)
		sign *= -1;
	while(1)
	{
		buf[i] = sign * (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
		if (nbr == 0)
			break;
	}
	if (sign == -1)
	{
		buf[i] = '-';
		i++;
	}
	buf[i] = '\0';
	char *ret = (char *)malloc(sizeof(char) *(ft_strlen(buf) + 1));
	i = 0;
	while (buf[i] != '\0')
	{
		ret[i] = buf[ft_strlen(buf) - i - 1];
                i++;

	}
	ret[i] = '\0';

	return (ret);

}
int    main(void)
{
    printf("%s\n", ft_itoa(-2));
    printf("%s\n", ft_itoa(2147483647));
    printf("%s\n", ft_itoa(0));
    return (0);
}

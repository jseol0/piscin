#include <stdio.h>

int ft_isspace(const char str)
{
	if (str == ' ' || str == '\t' || str == '\n' || str == '\v')
		return (1);
	else
		return (0) ;
}

int	ft_atoi(const char *str)
{
	int i = 0;
	while (ft_isspace(str[i]))
		i++;
	int sign = 1;
	if ( str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	int ret = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret *= 10;
		ret += (str[i] - '0') * sign;
		i++;
	}

	return (ret);
}

int main()
{
	char str[256] =  " -1234ab567";
	printf("%d", ft_atoi(str));
}

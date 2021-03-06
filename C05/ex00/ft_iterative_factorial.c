#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return (0);
	int i;
	int sum;
	i = 2;
	sum = 1;
	while(i <= nb)
	{
		sum *= i;
		i++;
	}
	return (sum);
}

int main()
{
int nb = 5;
printf("%d", ft_iterative_factorial(nb));
}

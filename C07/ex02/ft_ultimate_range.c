#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	int *arr;

	if (min >= max)
		return (0);
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	arr = *range;
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (size);
}

int main()
{
	int a = 1;
	int b = 4;
	int *range;
	printf("%d", ft_ultimate_range(&range, a, b));
}

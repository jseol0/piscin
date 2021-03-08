#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int i;
	int *ret;
	unsigned int size;
	
	if (min >= max)
		return (NULL);
	size = max - min;
	ret = (int *)malloc(sizeof(int) * size);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}

int	main()
{
	int min = 0;
	int max = 2100000000;
	int *arr = ft_range(min, max);
	for (int i = 0; i < max - min; i++)
		printf("%d ", arr[i]);
}

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int i;
	int *ret;
	int size;
	
	if (min >= max)
		return (NULL);
	size = max - min + 1;
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
	int *arr = ft_range(-1, 4);
	for (int i = 0; i < 6; i++)
		printf("%d ", arr[i]);
}

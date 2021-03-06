#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int range = 0;
	int sign = 1;
	if (start > end)
	{
		range = start - end + 1;
		sign *= -1;
	}
	if (start < end)
		range = end - start + 1;
	
	int *ret = (int*)malloc(range * sizeof(int));
	if (ret == NULL)
		return (NULL);
	int i = 0;
	while (i < range)
	{
		ret[i] = start + (i * sign);
		i++;
	}
	return (ret);
}

int main()
{
	int a = 0;
	int b = -3;
	int * arr = ft_
	int i = 0;
	printf("%lu\n", sizeof(arr));
	while(i < arr_size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

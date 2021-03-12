#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int size;
	if (start > end)
		size = start - end + 1;
	else
		size = end - start + 1;

	int *range = (int *)malloc(sizeof(int)*size);
	if (range == NULL)
		return (NULL);
	int *tmp= range;
	while (i < size)
	{
		tmp[i] = start;
		i++;
		start++;
	}
	return (range);
}

int main()
{
	
	int *arr;
	arr = ft_range(-1, 2);
	for (int i = 0; i < 4; i++)
		printf("%d", arr[i]);
}

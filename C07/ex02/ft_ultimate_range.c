/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:48:53 by jseol             #+#    #+#             */
/*   Updated: 2021/03/15 15:49:22 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
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

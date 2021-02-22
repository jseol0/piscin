/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:37:13 by jseol             #+#    #+#             */
/*   Updated: 2021/02/22 18:38:43 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *teb, int size)
{
	int i;
	int temp;
	
	i = 0;
	while (i < size / 2)
	{
		temp = teb[i];
		teb[i] = teb[size -1 - i];
		teb[size -1 -i] = temp;
		i++;
	}
}

int	main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int size = 7;

	ft_rev_int_tab(arr, size);
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	
}

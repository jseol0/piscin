/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:10:57 by jseol             #+#    #+#             */
/*   Updated: 2021/03/08 13:10:59 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int sum;

	if (nb < 0)
		return (0);
	i = 2;
	sum = 1;
	while (i <= nb)
	{
		sum *= i;
		i++;
	}
	return (sum);
}

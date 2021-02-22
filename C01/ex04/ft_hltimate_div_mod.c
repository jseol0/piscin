/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hltimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:09:54 by jseol             #+#    #+#             */
/*   Updated: 2021/02/22 18:09:35 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;
	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

int	main()
{
	int a, b;
	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);

	printf("%d %d", a, b);
}

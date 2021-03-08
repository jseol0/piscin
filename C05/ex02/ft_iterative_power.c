/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:25:45 by jseol             #+#    #+#             */
/*   Updated: 2021/03/08 13:25:47 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 1;
	while (i < power)
		nb *= nb;
	return (nb);
}

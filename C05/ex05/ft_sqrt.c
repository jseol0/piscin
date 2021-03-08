/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:24:12 by jseol             #+#    #+#             */
/*   Updated: 2021/03/08 13:24:45 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
		return (0);
	while (i < nb)
	{
		if (nb = i * i)
			return (i);
		i++;
	}
	return (0);
}

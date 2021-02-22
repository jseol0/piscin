/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 22:32:32 by jseol             #+#    #+#             */
/*   Updated: 2021/02/22 01:06:02 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_itoa(int n)
{
	int tens;
	int units;

	if (n > 9)
	{
		tens = n / 10;
		units = n % 10;
		ft_putchar(tens + 48);
		ft_putchar(units + 48);
	}
	else
	{
		ft_putchar(48);
		ft_putchar(n + 48);
	}
}

void		ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_itoa(a);
			ft_putchar(' ');
			ft_itoa(b);
			if (a < 98 || b < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		b++;
		}
	a++;
	}
}

int main()
{
	ft_print_comb2();
}

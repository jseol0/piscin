/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:40:18 by jseol             #+#    #+#             */
/*   Updated: 2021/02/24 12:29:34 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ch_hexa(char *str, int i)
{

	int tens;
	int units;

	ft_putchar('\\');
	tens = str[i] / 16;
	ft_putchar(tens + '0');
	units = str[i] % 16;
	if (units > 9)
	{
		str[i] = units + 87;
		ft_putchar(str[i]);
	}
	else
	{
		str[i] = units + '0';
		ft_putchar(str[i]);
	}
}

void	ft_putstr_with_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			if (str[i] <= 9)
			{
				ft_putchar('\\');
				str[i] = str[i] + '0';
				ft_putchar(str[i]);
			}
			else
				ft_ch_hexa(str, i);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main()
{
 	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_with_non_printable(str);
}

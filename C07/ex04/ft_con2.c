/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_con2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 23:55:29 by jseol             #+#    #+#             */
/*   Updated: 2021/03/04 23:55:58 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_whitespace(char c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}

int		is_valid(char *base, int *len)
{
	int		chk[256];
	int		i;
	char	c;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	*len = 0;
	while (base[*len])
	{
		c = base[*len];
		if (chk[(int)c] || c == '+' || c == '-' || ft_is_whitespace(c))
			return (0);
		chk[(int)c] = 1;
		++*len;
	}
	if (*len <= 1)
		return (0);
	return (1);
}

int		nbr_size(long long nbr, int base_len)
{
	int ret;

	if (!nbr)
		return (1);
	ret = 0;
	if (nbr < 0)
		++ret;
	while (nbr)
	{
		nbr /= base_len;
		++ret;
	}
	return (ret);
}

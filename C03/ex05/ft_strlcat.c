/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:13:07 by jseol             #+#    #+#             */
/*   Updated: 2021/03/10 21:55:52 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		j;
	unsigned int	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i + dest_size + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	if (dest_size > size)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + dest_size);
}

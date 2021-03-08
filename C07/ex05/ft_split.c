/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:55:54 by jseol             #+#    #+#             */
/*   Updated: 2021/03/08 19:38:41 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_size(char *str, char *charset)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset))
		{
			i++;
			continue;
		}
		size++;
		while (!is_charset(str[i], charset) && str[i])
			i++;
	}
	return (size);
}

void	ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	str_size;
	int	pivot;
	int	cnt;
	char	**ret;

	str_size = get_size(str, charset);
	ret = (char **)malloc(sizeof(char *) * (str_size + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset))
		{
			i++;
			continue;
		}
		pivot = i;
		while (!is_charset(str[i], charset) && str[i])
			i++;
		ret[cnt] = (char *)malloc(sizeof(char) * (i - pivot + 1));
		if (ret[cnt] == NULL)
			return (NULL);
		ft_strncpy(ret[cnt], str + pivot, i - pivot);
		ret[cnt][i - pivot] = '\0';
		cnt++;
	}
	ret[cnt] = NULL;
	return (ret);
}

int	main(void)
{
	int i = 0;
	char str[50] = "Hel loW or ld!";
	char charset[2] = " ";
	char **ret = ft_split(str, charset);
	while (ret[i])
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return (0);
}

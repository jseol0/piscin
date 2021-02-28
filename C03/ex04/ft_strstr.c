/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseol <jseol@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:52:46 by jseol             #+#    #+#             */
/*   Updated: 2021/02/27 12:55:29 by jseol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *tmp_str;
	char *tmp_find;

	if (*to_find == '\0')
		return str;

	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			tmp_str = str + 1;
			tmp_find = to_find + 1;
			while (*tmp_str != '\0' && *tmp_find != '\0' 
					&& *tmp_str == *tmp_fid)
			{
				tmp_str++;
				tmp_find++;
			}
			if (*tmp_find == '\0')
				return str;
			if (*tmp_str == '\0')
				return '\0'
		}
		str++;
	}
}

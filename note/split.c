#include <stdlib.h>
#include <stdio.h>

int	is_space(char ch)
{
	if (ch == ' ' || ch == '\t' || ch =='\n')
		return (1);
	return (0);
}

int	get_size(char *str)
{
	int	size;
	int	i;
	int	flag;

	i = 0;
	size = 0;
	flag = 0;
	while (str[i])
	{
		if (is_space(str[i]))
		{
			i++;
			continue;
		}
		size++;
		while (!is_space(str[i]) && str[i] != '\0')
			i++;
	}
	return (size);
}

void	ft_strncpy(char *dst, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

char	**ft_split(char *str)
{
	char	**ret;
	int	ret_size;
	int	i;
	int	cnt;
	int	pivot;

	ret_size = get_size(str);
	ret = (char **)malloc(sizeof(char *) * (ret_size + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (is_space(str[i]))
		{
			i++;
			continue;
		}
		pivot = i; // "  Hell   oWor  ld"
		while (!is_space(str[i]) && str[i] != '\0')
			i++;
		ret[cnt] = (char *)malloc(sizeof(char) * (i - pivot + 1));
		if (ret[cnt] == NULL)
			return (NULL); // error_handler
		ft_strncpy(ret[cnt], str + pivot, i - pivot);
		ret[cnt][i - pivot] = '\0';
		cnt++;
	}
	ret[cnt] = NULL;
	return (ret);
}
int	main(void)
{
	char **ret = ft_split("   Hell oWor ld zzz");
	int i = 0;
	while (ret[i])
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return (0);
}

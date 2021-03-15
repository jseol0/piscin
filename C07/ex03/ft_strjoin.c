#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char *ret;
	
	ret = dest;
	while(*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	strs_size;
	char	*ret;

	if (size == 0)
	{
		ret = (char *)malloc(sizeof(char));
		ret = 0;
		return (ret);
	}
	i = 0;
	while (i < size)
		strs_size += ft_strlen(strs[i++]);
	ret = (char *)malloc(strs_size + ((size - 1) * ft_strlen(sep)) + 1 );
	ft_strcat(ret, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(ret, sep);
		ft_strcat(ret, strs[i++]);
	}
	return (ret);
}

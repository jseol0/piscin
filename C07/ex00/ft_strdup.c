#include <stdlib.h>

int	ft_strlen(*str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	int	size;
	char	*ret;
	
	size = ft_strlen(src);
	ret = (char *)malloc(sizeof(char) *(size + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

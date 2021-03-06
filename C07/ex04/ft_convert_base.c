#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_char_check(char nbr)
{
	if (nbr == ' ' || nbr == '\f' || nbr == '\r'
			|| nbr == '\t' || nbr == '\v' || nbr == '+')
		return (1);
	else if (nbr == '-')
		return (-1);
	else
		return (0);
}

int	find_index(char c, char *base, int base_size)
{
	int i;

	i = 0;
	while (i < base_size)
	{
		if (c == base[i])
			return i;
		i++;
	}
	return (-1);
}

int	ft_atoi(char *nbr, char *base, int base_size)
{
	int i;
	int sign;
	int ret;

	sign = 1;
	ret = 0;
	i = 0;
	while (ft_char_check(nbr[i]))
	{
		sign *= ft_char_check(nbr[i]);
		i++;
	}
	while (nbr[i] != '\0')
	{
		if (!(find_index(nbr[i], base, base_size) == -1))
		{
			ret *= base_size;
			ret += find_index(nbr[i], base, base_size) * sign;
			i++;
		}
		else
			break;
	}
	return (ret);
}

int	ft_base_check(char *base, int base_size)
{
	int 	i;
	int	j;
	char	*tmp;

	i = 0;
	tmp = base;
	while (tmp [i] != '\0')
	{
		if (tmp[0] == '\0' || base_size == 1)
			return (0);
		if (tmp[i] == '+' || tmp[i] == '-' || tmp[i] == ' ' || tmp[i] == '\f'
			|| tmp[i] == '\n' || tmp[i] == '\r'|| tmp[i] == '\t' || tmp[i] == '\v')
			return (0);
		j = i + 1;
		while (tmp[j] != '\0')
		{
			if (tmp[i] == tmp[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int             ft_atoi_base(char *str, char *base, int base_size)
{
        int     i;
        int     nbr;

        if(ft_base_check(base, base_size));
                nbr = ft_atoi(str, base, base_size);
        return (nbr);
}

char		*dectobase(int dec_nbr, int base_size)
{
	char buf[42];
	char *ret;
	int i;
	int sign;

	sign = 1;
	if (dec_nbr < 0)
		sign *= -1;
	i = 0;
	while (1)
	{
		buf[i] = sign * (dec_nbr % base_size) + '0';
		dec_nbr /= base_size;
		i++;
		if (dec_nbr == 0)
			break;
	}
	buf[i] = '\0';
	ret = (char *)malloc(sizeof(char) *(ft_strlen(buf) + 1));
	i = 0;
	while (buf[i] != '\0')
	{
		ret[i] = buf[ft_strlen(buf) - i - 1];
                i++;
	}
	ret[i] = '\0';
	return (ret);
}

char 		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int basef_size;
	int baset_size;
	int dec_nbr;
	char *nbr_to;

        basef_size = ft_strlen(base_from);
        baset_size = ft_strlen(base_to);
	dec_nbr = ft_atoi_base(nbr, base_from, basef_size);
	nbr_to = dectobase(dec_nbr,  baset_size);
	return (nbr_to);
}

int main()
{
char str[100] = "123";
char base1[100] = "0123456789ABCDEF";
char base2[100] = "012345678";
printf("%s", ft_convert_base(str, base1, base2));
}

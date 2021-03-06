#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
	int i;
	if('a' <= str[0] && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while(str[i] != '\0')
	{
		if(!(str[i - 1] >= 48 && str[i - 1] <= 57)
			&& !(65 <= str[i - 1] && str[i - 1] <= 90) 
                        && !(97 <= str[i - 1] && str[i - 1] <= 122))
	       		{
				if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
         }
         return(str);
}

int main()
{
	char str[100] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};

	printf("%s", ft_strcapitalize(str));
}

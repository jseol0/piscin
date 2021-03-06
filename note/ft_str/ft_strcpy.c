char	*ft_strcpy(char *s1, char *s2)
{
	for (int i = 0; s2[i] != '\0', i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
	return (s1);
}

char    *ft_strcpy(char *s1, char *s2, int n)
{
	for (int i = 0; s2[i] != '\0' && i < n; i++)
		s1[i] = s2[i];

	for (int i = 0; i < n; i++)
		s1[i] = '\0';
	return (s1);
}

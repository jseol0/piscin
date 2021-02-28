char *ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(1)
	{
		if (s1[i] != s2[i])
			return s1[i] > s2[i] ? 1 : -1;
		if (s1[i] != '\0')
			break;
	}
	return (0);
}

char *ft_strncmp(char *s1, char *s2, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
			return s1[i] > s2[i] ? 1 : -1;
		if (s1[i] != '\0')
			break;
	}
	return (0);
}


char *strcat(char *dest, const char *src)
{
	for (int i = 0; dest[i] != '\0'; i++);

	for (int i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return dest;
}

char *strcat(char *dest, const char *src, int n)
{
	for (int i = 0; dest[i] != '\0'; i++);

        for (int i = 0; i < n; i++)
                dest[i] = src[i];
        dest[i] = '\0';

        return dest;

}

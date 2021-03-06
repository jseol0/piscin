int	main(int argc, char **argv)
{
	if (argc == 1 || argv[1][0] == '\0')
		write(1, "\0", 1);
	else
	{
		for (int i = 0; argv[1][i] != '\0'; i++)
		{	if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				for (int j = 0; i < argv[1][i] - 97 + 1; j++)
					write(1, argv[1][i], 1);
			}
			else
				write(1, argv[1][i], 1);
		}
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		int i = 0;
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] += 13;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] -= 13;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

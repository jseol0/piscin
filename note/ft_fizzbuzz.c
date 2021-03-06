#include <unistd.h>
int main()
{
	int i = 1;
	char ch1;
	char ch2;
	while ( i <= 100)
	{
		if (i %  15 == 0)
		{
			write(1, "fizzbuzz\n", 9);
			i++;
			continue;
		}
		if (i % 3 == 0)
		{
			write(1, "fizz\n", 5);
			i++;
			continue;
		}
		if (i % 5 == 0)
		{
			write(1, "buzz\n", 5);
			i++;
			continue;
		}
		if (i < 10)
		{
			ch1 = i + '0';
			write(1, &ch1, 1);
			write(1, "\n", 1);
		}
		if (i >= 10)
		{
			ch1 = (i / 10) + '0';
			ch2 = (1 % 10) + '0';
			write(1, &ch1, 1);
			write(1, &ch2, 1);
			write(1, "\n", 1);
		}
		i++;
	}
}

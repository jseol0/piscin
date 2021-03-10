 #include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
int n;

n = ft_atoi_base("  —7FFFFFFF", "0 123456789ABCDEF");
printf("n : %d\n", n);

n = ft_atoi_base("  —80000000 asdf fdf - —FF", "0123456789ABCDE
F");
printf("n : %d\n", n);

n = ft_atoi_base("   - — ", "01");
printf("n : %d\n", n);

n = ft_atoi_base("   —2147483648 ", "0123456789");
printf("n : %d\n", n);

return 0;
}

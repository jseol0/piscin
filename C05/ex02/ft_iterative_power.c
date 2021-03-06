int ft_iterative_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	int i = 1;
	while(i < power)
		nb *= nb;
	return (nb);
}

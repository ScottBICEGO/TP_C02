#include <unistd.h>

int		ipssi_recursive_power(int nb, int power);

void	ipssi_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ipssi_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	ipssi_putnbr(ipssi_recursive_power(2, 3));
	write(1, "\n", 1);
}

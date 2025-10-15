#include <unistd.h>

void	ipssi_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ipssi_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	ipssi_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}


#include <unistd.h>

int	ipssi_atoi(char *str);
void	ipssi_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ipssi_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	ipssi_putnbr(ipssi_atoi(" ---+--+1234ab567"));
	write(1, "\n", 1);
	return (0);
}


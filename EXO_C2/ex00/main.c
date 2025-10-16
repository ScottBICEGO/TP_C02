#include <unistd.h>

int     ipssi_strncmp(char *s1, char *s2, unsigned int n);

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

int main(void)
{
	ipssi_putnbr(ipssi_strncmp("abc", "abd", 3));
	write(1, "\n", 1);
	return(0);
}

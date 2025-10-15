#include <unistd.h>

int	ipssi_recursive_factorial(int nb);
void	ipssi_putnbr(int nb);

int main(void)
{
	ipssi_putnbr(ipssi_recursive_factorial(11));
	write(1, "\n", 1);
	return (0);
}



#include <unistd.h>

int	ipssi_iterative_factorial(int nb);
void	ipssi_putnbr(int nb);

int main(void)
{
	ipssi_putnbr(ipssi_iterative_factorial(13));
	write(1, "\n", 1);
	return (0);
}



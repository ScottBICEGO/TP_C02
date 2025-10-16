#include <unistd.h>

char	*ipssi_strcat(char *dest, char *src);

void	ipssi_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(void)
{
	char	dest[20] = "Ouuoh  ";
	char	src[] = "Ouuuoh";

	ipssi_putstr(ipssi_strcat(dest, src));
	write(1, "\n", 1);
	return (0);
}


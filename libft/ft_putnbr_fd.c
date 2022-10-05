#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	
	if(nb < 10)
		return ft_putchar_fd(nb+ '0', fd);
	ft_putnbr_fd(nb / 10, fd);	
	ft_putnbr_fd(nb % 10, fd);	
}


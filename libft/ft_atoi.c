#include "libft.h"

int	ft_atoi(const char *ptr)
{
	long int	res;
	short			sign;
	int				i;

	res = 0;
	i = 0;
	sign = 1;
	while ((ptr[i] >= 9 && ptr[i] <= 13) || ptr[i] == 32)
		i++;	
	if(ptr[i] == '+' || ptr[i] == '-')
	{
		if (ptr[i] == '-' )
			sign = -1;
		i++;
	}
	while ((ptr[i] >= '0' && ptr[i] <= '9') && ptr[i] != '\0')
	{
		res *= 10;
		res += ptr[i] - '0';
		i++;
	}
	return (res * sign);
}


//finished
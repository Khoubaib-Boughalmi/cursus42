#include "string.h"

char * ft_strnstrsecond(const char *big, const char *lit, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = ft_strlen(lit);
	if(!len)
		return ((char *)big);
	if(n !=0)
	{
		while (big[i] != '\0' && i <= n - len)
		{
			j = 0;
			while (lit[j] != '\0' && lit[j] == big[i + j])
				j++;
			if(lit[j] == '\0')
				return (char *)(big + i);
			i++;
		}
	}
	return ((void *)0);
}

//finished

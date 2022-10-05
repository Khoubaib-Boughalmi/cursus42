#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*new_str;

	i = 0;
	new_str = (char *) str;
	while (i < len)
	{
		new_str[i] = c;
		i++;
	}
	return (void *)(new_str);
}

//finished
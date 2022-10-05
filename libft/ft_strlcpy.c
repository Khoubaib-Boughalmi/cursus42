#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size) 
{
	int	i;
	size_t slen;

	i = 0;
	slen = ft_strlen(src);
	if(size <= 0)
		return (slen);
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}

//finished
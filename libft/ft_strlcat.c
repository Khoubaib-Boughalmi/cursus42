#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	long	i;
	long	originaldstlen;
	long	dlen;
	long	slen;

	originaldstlen = ft_strlen(dst);
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	
	if (size == 0 || size <= dlen)
		return (slen + size);
	while ((size - dlen + 1 > i) && src[i] != '\0')
		dst[dlen++] = src[i++]; 
	dst[dlen] = '\0';
	return  (originaldstlen + slen);
}

//finished

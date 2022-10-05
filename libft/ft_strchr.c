#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char ch = c;
	while (*s != '\0' && *s != ch)
		s++;
	if (*s == c)
		return (char *)s;
	return (NULL);
}


//finished
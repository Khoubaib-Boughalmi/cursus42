#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int len = ft_strlen(s);
	char ch = c;
	while (len > -1)
	{
		if(s[len] == c)
		return ((char *)s + len);
		len--;
	}
	return (0);
}

//finished
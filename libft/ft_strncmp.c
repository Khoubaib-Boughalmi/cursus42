#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1 == *s2 && *s1 != '\0')
	{
		if(--n == 0)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

//finished
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		slen;
	int		i;

	if(!s)
		return (NULL);
	slen = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (slen + 1));
	if(!ptr)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

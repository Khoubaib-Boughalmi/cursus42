#include "libft.h"

char * ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	size_t		slen;
	size_t		dlen;
	size_t 		i;

	i = 0;
	dlen = len;
	if (!len || !slen || start > ft_strlen(s))
		return (ft_strdup(""));
	dst = (char *)malloc((dlen + 1) * sizeof(char));
	if(!dst)
		return (NULL);
	while (i < dlen)
	{
		dst[i] = s[i];	
		i++;
	}
	dst[i] = '\0';
	return (dst);
}


char	*ft_substr2(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*final;

	if (s)
	{
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != '\0')
		i++;
	final = (char *) malloc((sizeof(char) * i) + 1);
		if (!(final))
			return (NULL);
	j = 0;
		while (j < i)
		{
			final[j] = s[start + j];
			j++;
		}
	final[j] = '\0';
		return (final);
	}
	return (NULL);
}
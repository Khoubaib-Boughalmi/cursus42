#include "libft.h"

static int ft_strtrim_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if(set[j] == s1[i])
			{
				i++;
				break;
			}
			j++;
		}
		if (set[j] == '\0')
			break;		
	}
	return (i);		
}

static int ft_strtrim_end(char const *s1, char const *set)
{
	int	len;
	int	j;

	len = ft_strlen(s1) - 1;
	while (len >= 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if(set[j] == s1[len])
			{
				len--;
				break;
			}
			j++;
		}
		if (set[j] == '\0')
			break;		
	}
	return (len);		
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		slen;
	int		dlen;
	char	*ptr;

	i =	ft_strtrim_start(s1, set);   
	j = ft_strtrim_end(s1, set);
	dlen = j - i; 
	k = 0;
	ptr = (char *)malloc(sizeof(char) * (dlen + 2));
	if(!ptr)
		return (NULL);
	while (i <= j)
		ptr[k++] = s1[i++];
	ptr[k] = '\0';
	return (ptr);	
}


// int main()
// {
// 	char str1[100] = "hello world";
// 	char str2[100] = "h ";
// 	char * ptr1;
// 	char * ptr2;

// 	//  ft_strtrim_end(str1, str2);
// 	//  ft_strtrim_start(str1, str2);
// 	ptr1 = ft_strtrim(str1, str2);
// 	printf("%s+\n",ptr1);

// 	// ptr1 =  ft_strjoin(NULL, str2);
// 	return 0;
// }
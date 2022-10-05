#include "libft.h"

int ft_wordlen(int n)
{
	int count;
	count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return count;	
}
static size_t ft_pow(int a, int b)
{
	int	res;
	res = 1;
	while (b-- > 0)
		res *= a;
	return (res);
}
char *ft_itoa(int n)
{
	int i;
	int wordlen;
	char *ptr;

	i = 0;
	wordlen = ft_wordlen(n);
	if (n < 0)
	{
		n = -n;
		ptr = (char *)malloc(sizeof(char) * (ft_wordlen(n) + 2));
		ptr[i++] = '-';
		while (wordlen-- != 0)
		{
			ptr[i++] = (n / ft_pow(10, wordlen)) + '0';
			n = n % ft_pow(10, wordlen);
		}
	}	
	else
	{
		ptr = (char *)malloc(sizeof(char) * (ft_wordlen(n) + 1));
		while (wordlen-- != 0)
		{
			ptr[i++] = (n / ft_pow(10, wordlen)) + '0';
			n = n % ft_pow(10, wordlen);
		}
	}
	ptr[i] = '\0';	
	return (ptr);
}

// int main()
// {
// 	// ft_itoa(123);
// 	printf("%s", ft_itoa(0));
// 	return 0;
// }
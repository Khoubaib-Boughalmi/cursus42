#include "libft.h"

int ft_toupper(int c)
{
	char ch = c;
	if(ch >= 'a' && ch <='z')
		return ((int) ch - 32);
	return ((int) ch);
}

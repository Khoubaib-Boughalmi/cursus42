/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khoubaib <khoubaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:11:48 by khoubaib          #+#    #+#             */
/*   Updated: 2022/10/07 21:12:05 by khoubaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t	ft_strlen(const char *str);

// size_t ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	originaldstlen;
// 	size_t	dlen;
// 	size_t	slen;

// 	dlen = 0;

// 	while (dst[dlen] != '\0')
// 		dlen++;
// 	originaldstlen = dlen;	
// 	slen = ft_strlen(src);
// 	i = 0;
// 	if (!size || size <= dlen)
// 		return (slen + size);
// 	while ((size - dlen - 1 > i) && src[i] != '\0')
// 		dst[dlen++] = src[i++]; 
// 	dst[originaldstlen] = '\0';
// 	return  (originaldstlen + slen);
// }

//finished

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && size - dlen - 1 > i)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
		dest[j] = '\0';
	return (dlen + slen);
}

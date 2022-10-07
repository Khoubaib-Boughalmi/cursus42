/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khoubaib <khoubaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:23:56 by khoubaib          #+#    #+#             */
/*   Updated: 2022/10/07 21:24:43 by khoubaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	size_t			slen;
	size_t			i;

	slen = ft_strlen(s);
	i = 0;
	if (!len || !slen || start >= ft_strlen(s))
		return (ft_strdup(""));
	while (i < len && s[i + start] != '\0')
		i++;
	dst = (char *)malloc((i + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}

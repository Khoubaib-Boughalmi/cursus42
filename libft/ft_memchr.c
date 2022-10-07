/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khoubaib <khoubaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:54:28 by khoubaib          #+#    #+#             */
/*   Updated: 2022/10/07 20:55:14 by khoubaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;

	str = s;
	ch = c;
	while (n-- != 0)
	{
		if (*str == ch)
			return ((void *)str);
		str++;
	}
	return (NULL);
}

//finished
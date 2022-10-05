/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboughal <kboughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:18:27 by kboughal          #+#    #+#             */
/*   Updated: 2022/09/29 22:40:11 by kboughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n)&& (((unsigned char *)src)[i] != '\0'))
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return dst;
}
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	char str1[50] = "hello world";
	char str2[50] = "1337";
	printf("%s \n",memcpy(str2, str1, 0));
	printf("%s",ft_memcpy(str2, str1, 0));

	return 0;
}
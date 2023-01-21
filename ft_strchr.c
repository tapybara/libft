/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:41:17 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/01/21 12:09:04 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (c == '\0')
		return (str);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{ 
	char str[] = "abcde";

	printf("%p\n",ft_strchr(str, 'a'));
	printf("%p\n",strchr(str, 'a'));
	printf("%p\n",ft_strchr(str, 'c'));
	printf("%p\n",strchr(str, 'c'));
	printf("%p\n",ft_strchr(str, '\0'));
	printf("%p\n",strchr(str, '\0'));
}*/
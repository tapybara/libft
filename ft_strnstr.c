/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:23:43 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/01/23 00:15:58 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needle_len;
	const char	*haystack_end;

	if (!*needle)
		return ((char *)haystack);
	if (len == 0 || ft_strlen(haystack) < len)
		return (NULL);
	needle_len = ft_strlen(needle);
	haystack_end = haystack + len - needle_len;
	while (haystack <= haystack_end)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}	
	return (0);
}

int main()
{
	char	*s1 = "MZIRIBMZIRIBMZE123";
	char	*s2 = "bbbbbb";
	size_t	max = 100;
    
	printf("%s : %s\n", "ft", "lib");
    printf("%s : %s\n", ft_strnstr(s1, s2, max), strnstr(s1, s2, max));
    // printf("%s : %s\n", ft_strnstr(s1, "ab", 5), strnstr(s1, "ab", 5));
    // printf("%s : %s\n", ft_strnstr(s1, "abc", 5), strnstr(s1, "abc", 5));
    // printf("%s : %s\n", ft_strnstr(s1, "abc", 0), strnstr(s1, "abc", 0));
    // printf("haystack=NULL,len=0: %s\n", strnstr(NULL, "abc", 0));
    // printf("haystack=NULL,len=0: %s\n", ft_strnstr(NULL, "abc", 0));
    // printf("haystack=NULL,len=3: %s\n", strnstr(NULL, "fake", 3));
    // printf("haystack=NULL,len=3: %s\n", ft_strnstr(NULL, "fake", 3));
    //printf("%s\n", ft_strnstr("fake", NULL, 3));	//segfa
    //printf("%s\n", strnstr("fake", NULL, 3));		//segfa
    //printf("%s\n", ft_strnstr(a1, a1, NULL));	//Error(Review check)
    //printf("%s\n", strnstr(a1, a1, NULL));	//Error(Review check)
    return (0);
}*/
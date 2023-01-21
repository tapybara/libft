/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:02:33 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/01/21 18:50:28 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char a1[] = "abcde";
	
    printf("%s : %s\n", "ft", "lib");
    printf("%d : %d\n", ft_strncmp(a1, "abcde", 5), strncmp(a1, "abcde", 5));
    printf("%d : %d\n", ft_strncmp(a1, "abcdd", 5), strncmp(a1, "abcdd", 5));
    printf("%d : %d\n", ft_strncmp(a1, "abcdf", 5), strncmp(a1, "abcdf", 5));
    printf("%d : %d\n", ft_strncmp(a1, "abcdd", 0), strncmp(a1, "abcdd", 0));
    //printf("%d\n", ft_strncmp(a1, NULL, 5));	//segfa
    //printf("%d\n", strncmp(a1, NULL, 5));		//segfa
    printf("%d\n", strncmp(NULL, a1, 5));		//segfa
    printf("%d\n", ft_strncmp(NULL, a1, 5));	//segfa
    //printf("%d\n", ft_strncmp(a1, a1, NULL));	//Error(Review check)
    //printf("%d\n", strncmp(a1, a1, NULL));	//Error(Review check)
    return (0);
}*/
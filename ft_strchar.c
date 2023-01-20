/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:41:17 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/01/21 01:04:45 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while(s != (char *)c)
        *s++;
    if (*s == '\0')
        return (NULL);
    return  (s);
}

#include <stdio.h>
#include <string.h>

int main(void)
{ 
    char str[] = "abcde";

    printf("%p",ft_strchr(str, 'a'));
    printf("%p",strchr(str, 'a'));
    printf("%p",ft_strchr(str, 'c'));
    printf("%p",strchr(str, 'c'));
    printf("%p",ft_strchr(str, '\0'));
    printf("%p",strchr(str, '\0'));
}
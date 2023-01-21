/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 01:18:17 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/01/21 10:14:35 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <stdlib.h>

char num_to_ascii(int num) {
    if (num >= 0 && num <= 127) {
        return (char)num;
    } else {
        return '\0';
    }
}

int main(void)
{
	int num = '4';
	char c = 'a';

	printf("%c\n", num_to_ascii(ft_tolower(num))); //NULL
	num = atoi(&c);
	printf("%c\n", num_to_ascii(ft_tolower(c))); //A
	return (0);
}*/
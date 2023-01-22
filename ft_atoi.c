/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuyamatakahito <okuyamatakahito@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:57:59 by okuyamataka       #+#    #+#             */
/*   Updated: 2023/01/22 15:23:01 by okuyamataka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	num;
	int			sign;

	num = 0;
	sign = 1;
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str != '\0')
	{
		if (*str < '0' || '9' < *str)
			break ;
		if (num > LONG_MAX / 10
			|| (num == LONG_MAX / 10 && (*str - '0') > LONG_MAX % 10))
		{
			if (sign == 1)
				return ((int)LONG_MAX);
			else if (sign == -1)
				return ((int)LONG_MIN);
		}
		num = num * 10 + (*str - '0');
		str++;
	}
	return ((int)(num * sign));
}

/*
#include <stdio.h>

int main(void)
{
	char s1[] = "     29847";
	char s2[] = "     -29847";
	char s3[] = "     \t\v\f\r\n \f-06050";
	char s4[] = "945";
	char s4[] = "+1234";

	printf("FT %d :STD %d\n", ft_atoi(s1), atoi(s1));
	printf("FT %d :STD %d\n", ft_atoi(s2), atoi(s2));
	printf("FT %d :STD %d\n", ft_atoi(s3), atoi(s3));
	printf("FT %d :STD %d\n", ft_atoi(s4), atoi(s4));
	printf("FT %d :STD %d\n", ft_atoi(s5), atoi(s5));
	return (0);
}*/
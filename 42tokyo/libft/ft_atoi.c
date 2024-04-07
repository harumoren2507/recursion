/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:40:29 by retoriya          #+#    #+#             */
/*   Updated: 2024/04/07 06:52:36 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_is_space(const char c)
{
    if (c == ' ' || c == '\t' || c == '\n' 
        || c == '\v' || c == '\f' || c == '\r')
        return (1);
    return (0);
}

int ft_check(char str_i, int sign, long ans)
{
    if (ans == LONG_MAX / 10 && sign == 1)
    {
        if ('8' <= str_i && str_i <= '9')
            return (1);
    }
    else if (ans > LONG_MAX / 10 && sign == 1)
        return (1);
    else if (ans == LONG_MAX / 10 && sign == -1 && (str_i == '9'))
        return (2);
    else if (ans > LONG_MAX / 10 && sign == -1)
        return (2);
    return (0);
}

long    ft_strtol(const char *str, int sign)
{
    long    ans;
    int     i;
    ans = 0;
    i = 0;

    while (ft_isdigit(str[i]) == 1)
    {
        if (ft_check(str[i], sign, ans) == 1)
            return (LONG_MAX);
        else if (ft_check(str[i], sign, ans) == 2)
            return (LONG_MIN);
        ans = ans * 10 + (str[i] - '0');
        i++;
    }
    return (ans * sign);
}

int ft_atoi(const char *str)
{
    int sign;

    sign = 1;
    while (ft_is_space(*str))
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    return ((int)ft_strtol(str, sign));
}

#include <stdio.h>
int	main(void)
{
	char	*s;

	s = "-9223372036854775808";
	printf("org:%d\n", ft_atoi(s));
	printf("imi:%d\n", atoi(s));
	// printf("ans:%ld\n", LONG_MAX);
	// printf("ans:%ld\n", LONG_MIN);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:45:18 by retoriya          #+#    #+#             */
/*   Updated: 2024/04/16 12:52:31 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newarray;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < start || len == 0)
	{
		newarray = ft_calloc(1, 1);
		return (newarray);
	}
	else if (len_s - start < len)
		len = len_s - start;
	newarray = (char *)malloc(len + 1);
	if (!newarray)
		return (NULL);
	ft_strlcpy(newarray, s + start, len + 1);
	return (newarray);
}

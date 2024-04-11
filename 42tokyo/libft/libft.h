/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 05:03:55 by retoriya          #+#    #+#             */
/*   Updated: 2024/04/11 15:40:00 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int ft_isdigit(int c);
int ft_atoi(const char *str);
size_t    ft_strlcat(char *dest, const char *src, size_t  dest_size);
size_t    ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *str);
#endif
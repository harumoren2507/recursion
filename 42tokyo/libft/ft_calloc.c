/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:06:59 by retoriya          #+#    #+#             */
/*   Updated: 2024/04/14 19:34:34 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	else if (count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int	main(void)
{
	int	*p;

	// int 型の配列5個分のメモリを確保
	p = (int *)calloc(5, sizeof(int));
	// メモリ割り当ての成功をチェック
	if (p == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1); // エラーコード1で終了
	}
	// 割り当てられたメモリの内容を確認（calloc で0初期化されているはず）
	printf("p[0] = %d\n", p[0]);
	printf("p[1] = %d\n", p[1]);
	printf("p[2] = %d\n", p[2]);
	printf("p[3] = %d\n", p[3]);
	printf("p[4] = %d\n", p[4]);
	// メモリを解放
	free(p);
	return (0); // 正常終了
}
*/
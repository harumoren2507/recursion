/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 21:01:04 by retoriya          #+#    #+#             */
/*   Updated: 2024/04/09 23:32:00 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlen(char *str)
{
    unsigned int    len;
    
    len = 0;
    while (*str)
    {
        str++;
        len++;
    }
    return (len);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int  dest_size)
{
    int i;
    int j;

    unsigned int    src_len;
    unsigned int    dest_len;

    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);

    i = src_len;
    j = 0;
    if (dest_size <= dest_len)
        return (src_len + dest_len);
    while (src[j] && j < dest_size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}

int main(int argc, char *argv[])
{
    unsigned int    src_len;
    unsigned int    dest_len;

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:43:58 by kkai              #+#    #+#             */
/*   Updated: 2021/04/24 10:36:08 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char   *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == c)
            return ((char*)str);
        str++;
    }
    return (NULL);
}
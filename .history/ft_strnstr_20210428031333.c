/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:35:53 by kkai              #+#    #+#             */
/*   Updated: 2021/04/28 03:13:33 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		i;
	int		j;
	size_t	size;

	if (*str == 0)
		return (NULL);
	size = ft_strlen(to_find);
	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char*)str);
	while (len >= size)
	{
		len--;
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return ((char*)&str[i]);
		}
		i++;
	}
	return (NULL);
}
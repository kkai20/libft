/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:02:48 by kkai              #+#    #+#             */
/*   Updated: 2021/04/27 18:19:26 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	*array_size(const char *s, char c)
{
	unsigned int	len;

	len =0;
	while (*s != '\0')
	{
		if (*s != c)
			len++;
		s++;
	}
	return (len);
}

	**ft_split(char const *s, char c)
{
	unsigned int	size;
	char			**ans;

	if (!s)
		return (NULL);
	size = arr_size(s, c);
	ans = (char **)malloc(sizeof(char *) * (size + 1));
	if (!ans)
		return (NULL);



}
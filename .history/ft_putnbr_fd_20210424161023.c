/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkai <kkai@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:47:37 by kkai              #+#    #+#             */
/*   Updated: 2021/04/24 16:10:23 by kkai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, inf fd)
{
	int	flag;

	flag = 1;
	if (n < 0)
	{
		flag = -1;
		write(fd, '-', 1);
	}
	if (n < 10 && n > -10)
	{

	}
	if (n == -2147483648)


}
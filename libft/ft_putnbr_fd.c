/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:36:39 by yabarhda          #+#    #+#             */
/*   Updated: 2024/10/29 09:47:05 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	here_we_go_again(int n, int fd)
{
	char	temp;

	if (n == 0)
		return ;
	here_we_go_again(n / 10, fd);
	temp = (n % 10) + '0';
	write(fd, &temp, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		write(fd, "-", 1);
		n *= -1;
	}
	if (n == 0)
		write(fd, "0", 1);
	else
		here_we_go_again(n, fd);
}

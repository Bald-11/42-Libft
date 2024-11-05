/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:29:32 by yabarhda          #+#    #+#             */
/*   Updated: 2024/11/03 10:14:32 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(s);
	d = (char *)malloc(src_len + 1 * sizeof(char));
	if (!d)
		return (NULL);
	while (i < (src_len + 1))
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

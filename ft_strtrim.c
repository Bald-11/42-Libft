/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:28:38 by yabarhda          #+#    #+#             */
/*   Updated: 2024/10/31 11:28:42 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char s, const char *set)
{
	while (*set)
	{
		if (s == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*pack_up_string(char *dest, const char *src, size_t s, size_t end)
{
	size_t	temp_start;
	size_t	i;

	temp_start = s;
	i = 0;
	while (i <= (end - temp_start))
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	start = 0;
	end = 0;
	if (*s1 == 0)
		return (ft_strdup(""));
	while (s1[start] && check(s1[start], set) == 1)
		start++;
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (s1[end] && check(s1[end], set) == 1)
		end--;
	dest = (char *)malloc((end - start) * sizeof(char) + 2);
	if (!dest)
		return (NULL);
	return (pack_up_string(dest, s1, start, end));
}

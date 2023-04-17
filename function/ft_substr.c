/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 23:55:46 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/17 19:49:27 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub_str;
	size_t		strlen;

	strlen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= strlen)
		ft_strdup("");
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub_str = (char *)malloc((strlen + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len + 1);
	// ft_memcpy(sub_str, s + start, len);
	sub_str[len] = '\0';
	return (sub_str);
}

// char	*ft_substr(const char *s, unsigned int start, size_t len)
// {
// 	char	*ret;

// 	if (!s)
// 		return (0);
// 	if (ft_strlen(s) < start)
// 		len = 0;
// 	if (ft_strlen(s + start) < len)
// 		len = ft_strlen(s + start);
// 	ret = malloc(sizeof(char) * (len + 1));
// 	if (!ret)
// 		return (0);
// 	ft_strlcpy(ret, s + start, len + 1);
// 	return (ret);
// }
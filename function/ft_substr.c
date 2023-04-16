/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 23:55:46 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/17 00:31:11 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strdup(const char *src)
// {
// 	char	*dest;
// 	size_t	i;
// 	size_t	strlen;

// 	strlen = 0;
// 	while (src[strlen])
// 		strlen++;
// 	dest = (char *)malloc(sizeof(*dest) * (strlen + 1));
// 	i = 0;
// 	while (i < strlen)
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t	i;

// 	if (!dest)
// 		return (NULL);
// 	i = 0;
// 	while (i < n)
// 	{
// 		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
// 		i++;
// 	}
// 	return (dest);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		strlen;
	const char	*str;
	char		*sub_str;

	str = s;
	if (!str)
		return (NULL);
	strlen = 0;
	while (str[strlen])
		strlen++;
	if (start >= strlen)
		ft_strdup("");
	if (len > strlen - start)
		len = strlen - start;
	sub_str = (char *)malloc((strlen + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	ft_memcpy(sub_str, str + start, len);
	sub_str[len] = '\0';
	return (sub_str);
}

#include <stdio.h>

int	main(void)
{
	char			*str;
	unsigned int	start;
	size_t			length;
	char			*sub_str;

	str = "abc";
	start = 1;
	length = 7;
	sub_str = ft_substr(str, start, length);
	if (sub_str)
	{
		printf("La sous-chaîne extraite est : %s\n", sub_str);
		free(sub_str);
	}
	else
	{
		printf("Erreur : indice de départ invalide ou longueur négative\n");
	}
	return (0);
}

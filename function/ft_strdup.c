/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:38:03 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/12 02:11:52 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	total;

	total = 0;
	while (str[total])
		total++;
	return (total);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(ft_strlen(src) * sizeof(char));
	i = 0;
	if (!dest)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

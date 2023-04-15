/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:35:22 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/15 20:57:03 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!n)
		return (NULL);
	i = 0;
	while (i < n)
	{
		i++;
		((char *)dest)[i] = ((char *)src)[i];
	}
	return (dest);
}

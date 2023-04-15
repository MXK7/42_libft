/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:42:56 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/15 20:57:07 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (c == 0)
		return (0);
	while (i < len)
		((char *)s)[i++] = c;
	return (s);
}

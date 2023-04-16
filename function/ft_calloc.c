/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:18:40 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/16 22:41:41 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	result;
	char	*ret;
	size_t	i;

	if (count == 0 || size == 0)
		return (NULL);
	result = count * size;
	ret = malloc(result);
	i = 0;
	while (i < result)
		((char *)ret)[i++] = '\0';
	return (ret);
}

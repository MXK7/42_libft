/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:18:40 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/17 19:50:20 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	result;
	char	*ret;
	size_t	i;

	result = count * size;
	ret = malloc(result);
	i = 0;
	while (i < result)
		((char *)ret)[i++] = '\0';
	return (ret);
}

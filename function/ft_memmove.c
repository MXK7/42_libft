/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:27:36 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/12 22:38:45 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	if (n == 0 || dest == src)
		return (dest);
	if (dest > src)
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i]; 
			i++;
		}
	}
	else
	{
		i = n;
		while (i != 0)
		{
			((char *)dest)[i] = ((char *)src)[i]; 
			i--; 
		}
	}
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 03:25:50 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/15 17:36:01 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	unsigned int	strlen;
	unsigned int	c;
	unsigned int	nb;

	nb = 0;
	c = 1;
	strlen = ft_strlen(str);
	if (!strlen)
		return (0);
	while (strlen--)
	{
		if (!(str[strlen] >= 48 && str[strlen] <= 57))
			return (0);
		if ((nb + ((str[strlen] - 48) * c)) > 2147483647)
			return (0);
		nb += (str[strlen] - 48) * c;
		c *= 10;
	}
	return (nb);
}

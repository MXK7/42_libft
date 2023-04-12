/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:05:04 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/12 02:30:46 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	const char	*i;

	i = str + ft_strlen(str);
	while (str <= i)
	{
		if (*i == (char)c)
			return ((char *)i);
		i--;
	}
	return (NULL);
}

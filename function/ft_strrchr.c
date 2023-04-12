/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:05:04 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/12 22:43:06 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
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

	i = str + ft_strlen(*str);
	while (str <= i)
	{
		if (*i == (char)c)
			return ((char *)i);
		i--;
	}
	return (NULL);
}

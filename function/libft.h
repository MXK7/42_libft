/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:30:36 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/12 16:13:21 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
# define LIBFT

# include <unistd.h>

int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
// int				ft_atoi(const char *str);
int				ft_isalpha(char c);
int				ft_isascii(int c);
int				ft_tolower(char *str);
int				ft_toupper(char *str);

char			*ft_strcat(char *dest, char *src);
char			*ft_strchr(const char *str, int c);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
// char			*ft_strrchr(const char *str, int c);

size_t			ft_strlcpy(char *dest, const char *src, size_t size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

#endif

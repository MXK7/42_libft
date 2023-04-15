/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:30:36 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/15 18:49:24 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *s1, char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
// size_t	ft_strlcat(char *dest, const char *src, size_t size);

char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *src);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
// char	*ft_substr(char const *s, unsigned int start, size_t len);
// char	*ft_strjoin(char const *s1, char const *s2);
// char	*ft_strtrim(char const *s1, char const *set);
// char	**ft_split(char const *str, char c);
// char	*ft_itoa(int n);
// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
// void	ft_striteri(char *s, void (*f)(unsigned int, char*));
// void	ft_putchar_fd(char c, int fd);
// void	ft_putstr_fd(char *s, int fd);
// void	ft_putendl_fd(char *s, int fd);
// void	ft_putnbr_fd(int n, int fd);
// void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
// void	*ft_calloc(size_t count, size_t size);

#endif



// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str1[15];
// 	char str2[15];
// 	int ret;
// 	int ret2;

// 	memcpy(str1, "abcdef", 6);
// 	memcpy(str2, "ABCDEF", 6);

// 	ret = memcmp(str1, str2, 5);/* condition */
// 	ret2 = ft_memcmp(str1, str2, 5);
// 	printf("%d\n", ret);
// 	if (ret > 0)
// 	{
// 		printf("NO-FT: str2 est inférieure à str1");
// 	}
// 	else if (ret < 0)
// 	{
// 		printf("NO-FT: str1 est inférieure à str2");
// 	}
// 	else
// 	{
// 		printf("NO-FT: str1 est = à str2");
// 	}
// 	printf("\n----------------------");
// 	printf("\n----------------------");
// 	printf("\n----------------------\n");
// 	if (ret2 > 0)
// 	{
// 		printf("FT: str2 est inférieure à str1");
// 	}
// 	else if (ret2 < 0)
// 	{
// 		printf("FT: str1 est inférieure à str2");
// 	}
// 	else
// 	{
// 		printf("FT: str1 est = à str2");
// 	}
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:11:23 by njung             #+#    #+#             */
/*   Updated: 2024/11/02 09:59:55 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int character);
int		ft_tolower(int character);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memset(void *ptr, int value, size_t count);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *s, size_t sz);
void	*ft_memmove(void *dst, const void *src, size_t size);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:53:30 by grubin            #+#    #+#             */
/*   Updated: 2022/01/07 14:57:42 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>

int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_isalnum(int character);
int				ft_isascii(int character);
int				ft_isprint(int character);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *str, int character, size_t number);
void			ft_bzero(void *str, size_t number);
void			*ft_memcpy(void *dest, const void *src, size_t number);
void			*ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_toupper(int character);
int				ft_tolower(int character);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
void			*ft_memchr(const void *memBloc, int searchChar, size_t size);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
char			*ft_strnstr(const char *s1, const char *s2, size_t len);
long long int	ft_atoi(const char *str);
void			*ft_calloc(size_t elementCount, size_t elementSize);
char			*ft_strdup(const char *source);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);

#endif

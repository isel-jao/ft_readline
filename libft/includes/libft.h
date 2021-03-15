/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao  <isel-jao@student.42.f>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:30:14 by isel-jao          #+#    #+#             */
/*   Updated: 2021/03/15 16:23:53 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <stdio.h>

# define TRUE 1
# define FALSE 0

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

size_t			ft_strlen(const char *str);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strdup(const char *s1);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, const char *needle,
				size_t len);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memalloc(size_t size);
char			*ft_substr(char const*s, unsigned int start, size_t len);
char			*ft_strjoin(char const*s1, char const *s2);
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int i, int fd);
void			ft_putnbr(int i);
char			*ft_itoa(int n);
char			**ft_split(char const *s, char c);
char			*ft_strtrim(char const *s1, char const *set);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
void			*ft_calloc(size_t count, size_t size);
void			ft_putendl_fd(char *s, int fd);
void			ft_putendl(char *s);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				get_next_line(int fd, char **line);
void			ft_free(void *ptr);
int				ft_strisnum(char *s);
void			ft_putstr(char *s);
void			ft_putendl(char *s);
int				tab_len(char **tab);
char			*ft_strcpy(char *dst, const char *src);





#endif

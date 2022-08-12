/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguranda <pguranda@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:01:49 by pguranda          #+#    #+#             */
/*   Updated: 2022/08/12 14:18:23 by pguranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include	<unistd.h>
# include	<stdlib.h>

typedef struct s_list
{
	int				content;
	int				position;
	int				index;
	int				score;
	struct s_list	*next;
}	t_list;
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
int				ft_strlen(const char *c);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strdup(const char *s1);
char			*ft_strchr(char *s, char c);
char			*ft_strrchr(const char *s, int c);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
void			*ft_calloc(size_t count, size_t size);
void			ft_bzero(void *s, size_t n);
long int		ft_atoi(const char *str);
char			**ft_split(char const *s, char c, int *counter);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
int				ft_putchar_fd(char c, int fd);
int				ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
int				ft_putnbr_fd(int n, int fd, int counter);
t_list			*ft_lstnew(int content);
void			ft_lstadd_front(t_list **lst, t_list *new);
t_list			*ft_lstadd_back(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
//void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (del)(int));
void			ft_lstclear(t_list **lst, void (del)(int));
void			ft_lstiter(t_list *lst, void (f)(int));

#endif

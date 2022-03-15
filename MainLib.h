/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainLib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgobbett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:45:01 by jgobbett          #+#    #+#             */
/*   Updated: 2022/03/15 13:04:59 by jgobbett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAINLIB_H
# define MAINLIB_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

//-----Get Next Line-----

char		*get_next_line(int fd);
char		**ft_split(char const *s, char t);

// -----PrintF-----

typedef struct s_args
{
	va_list	arg;
	int		counter;
}	t_args;

int			ft_printf(const char *str, ...);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_char(t_args *args);
void		ft_string(t_args *args);
void		ft_unsignednum(t_args *args);
void		ft_hex(t_args *args, char c);
void		ft_pointer(t_args *args);
void		ft_num(t_args *args);
static void	ft_strrev(char *str);
int			numlen(int n);
char		*ft_unsigneditoa(unsigned int n);
static int	unsignednumlen(unsigned int n);
size_t		ft_strlen(const char *str);
static void	ft_strrev(char *str);

//-----LIBFT-----

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//----- p1
int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);

//----- p2
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);

//----- p3
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstclear(t_list **alst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void*));

//----- p4
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);

//----- p5
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t n);

//----- p6
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
char		*ft_strchr(const char *s, int c);

//----- p7
char		*ft_strdup(const char *src);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);

//----- p8
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char		*ft_strrchr(const char *s, int c);

//----- p9
static int	ft_isinset(char c, char const *set);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);

//----- p10
char		**ft_split(char const *s, char c);

//----- p11
char		*ft_itoa(int n);

#endif

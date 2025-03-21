/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   hotrace.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/05 14:14:04 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/05 17:31:41 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HOTRACE_H

# define HOTRACE_H
# define BUFF_SIZE 4096

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

int		get_next_line(const int fd, char **line);
char	**addline(char **map, char *line);
void	ft_notfound(char *str);
char	*ft_strcat(char *s1, const char *s2);
void	ft_notfound(char *key);
void	ft_putendl(char const *s);
void	ft_putstr(char const *str);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *src);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strnew(size_t size);
char	*ft_strcpy(char *dst, const char *src);
int		ft_resolve(int fd, char *keyword, char **keyvalue, int size);
void	ft_putchar(char c);
void	ft_search(char *keyword, char **keyvalue, int size);
int		ft_strcmp(const char *s1, const char *s2);

#endif
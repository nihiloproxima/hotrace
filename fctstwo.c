/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fctstwo.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/05 15:15:12 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/05 15:53:47 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;
	int		len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(*src) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*p;

	str = (char*)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	p = str;
	while (size)
	{
		*p++ = '\0';
		size--;
	}
	*p = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
	{
		while (s[i])
			i++;
		return ((char*)s + i);
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s != NULL)
	{
		if (!(str = (char*)malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

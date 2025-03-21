/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fcts.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/05 15:10:21 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/05 17:31:29 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

size_t	ft_strlen(const char *str)
{
	const char *ptr;

	ptr = str;
	while (1)
	{
		if (!*(ptr++))
			break ;
		if (!*(ptr++))
			break ;
		if (!*(ptr++))
			break ;
		if (!*(ptr++))
			break ;
		if (!*(ptr++))
			break ;
		if (!*(ptr++))
			break ;
		if (!*(ptr++))
			break ;
	}
	return (ptr - 1) - str;
}

void	ft_putstr(char const *str)
{
	if (str != NULL)
		write(1, str, ft_strlen((const char *)str));
}

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	write(1, "\n", 1);
}

void	ft_notfound(char *key)
{
	ft_putstr(key);
	ft_putstr(": Not found.\n");
}

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

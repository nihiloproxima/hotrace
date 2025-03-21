/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 11:31:13 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 12:03:44 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*i;

	i = ft_strlen(s) + (char*)s;
	while (*i != (char)c)
	{
		if (i == s)
			return (NULL);
		i--;
	}
	return (i);
}

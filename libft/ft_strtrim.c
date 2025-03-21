/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 11:59:56 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 15:04:38 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*dst;

	i = 0;
	if (s != NULL)
	{
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (s[i] == '\0')
			return (ft_strnew(0));
		j = ft_strlen(s) - 1;
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		dst = ft_strsub(s, i, j - i + 1);
		return (dst);
	}
	return (NULL);
}

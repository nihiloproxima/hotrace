/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getfirstword.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 12:51:19 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 13:11:44 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_getfirstword(const char *str)
{
	int		i;
	char	*res;
	int		len;
	int		pos;

	i = 0;
	len = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	pos = i;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		len++;
		i++;
	}
	res = ft_strsub(str, pos, len);
	return (res);
}

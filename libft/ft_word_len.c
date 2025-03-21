/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_word_len.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 16:11:53 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 16:16:08 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_len(char const *str, int index, char c)
{
	int	i;

	i = 0;
	while (str[index] != c && str[index] != '\0')
	{
		index++;
		i++;
	}
	return (i);
}

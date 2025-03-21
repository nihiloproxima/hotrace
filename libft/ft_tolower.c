/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tolower.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 11:13:48 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 12:09:59 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	int	nb;

	nb = (c >= 65 && c <= 90) ? c + 32 : c;
	return (nb);
}

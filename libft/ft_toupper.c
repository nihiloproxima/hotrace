/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   toupper.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 11:19:12 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 12:10:07 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	int	nb;

	nb = (c >= 97 && c <= 122) ? c - 32 : c;
	return (nb);
}

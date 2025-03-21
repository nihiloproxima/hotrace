/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_resolve.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/05 15:50:07 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/05 17:31:57 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

int		ft_resolve(int fd, char *keyword, char **keyvalue, int size)
{
	while (get_next_line(fd, &keyword))
	{
		ft_search(keyword, keyvalue, size);
	}
	return (0);
}

void	ft_search(char *keyword, char **keyvalue, int size)
{
	int i;

	i = 0;
	while (keyvalue[i])
	{
		if (!(ft_strcmp(keyvalue[i], keyword)))
		{
			if (keyvalue[i + 1] != NULL)
			{
				ft_putendl(keyvalue[i + 1]);
				break ;
			}
		}
		i = i + 2;
	}
	if (i == size)
		ft_notfound(keyword);
}

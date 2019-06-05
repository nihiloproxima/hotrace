/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/05 14:13:23 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/05 18:34:31 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "hotrace.h"

void	ft_print_map(char **map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i])
	{
		ft_putendl(map[i]);
		i++;
	}
}

char	**getmap(char *line, int fd, int *size)
{
	int		i;
	int		j;
	char	**map;

	i = 0;
	j = 0;
	map = NULL;
	while (get_next_line(fd, &line))
	{
		*size = *size + 1;
		if (line[0] == '\0')
			break ;
		map = addline(map, line);
	}
	return (map);
}

char	**addline(char **map, char *line)
{
	char	**res;
	int		i;

	i = 0;
	if (!map)
	{
		if (!(map = (char**)malloc(sizeof(char*) * (1))))
			return (NULL);
		map[0] = NULL;
	}
	while (map[i] != NULL)
		i++;
	if (!(res = (char**)malloc(sizeof(char*) * (i + 2))))
		return (NULL);
	i = 0;
	while (map[i] != NULL)
	{
		res[i] = ft_strdup(map[i]);
		i++;
	}
	res[i] = ft_strdup(line);
	res[i + 1] = NULL;
	return (res);
}

int		main(void)
{
	char	*line;
	int		i;
	char	**keyvalue;
	int		size;

	size = 0;
	keyvalue = NULL;
	line = NULL;
	i = 0;
	keyvalue = getmap(line, 0, &size);
	size--;
	if (keyvalue)
	{
		ft_resolve(0, line, keyvalue, size);
	}
	return (0);
}
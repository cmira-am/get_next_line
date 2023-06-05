/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:27:18 by cmira-am          #+#    #+#             */
/*   Updated: 2023/06/02 12:14:19 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *x)
{
	size_t	count;

	count = 0;
	while (x[count] != '\0')
		count++;
	return (count);
}

char	*ft_strjoin(char *next_line, char *temp)
{
	char	*dest;
	size_t	next_line_lenght;
	size_t	temp_lenght;
	int		count;

	if (next_line == NULL)
	{
		next_line = malloc(sizeof(char));
		next_line[0] = '\0';
	}
	next_line_lenght = ft_strlen(next_line);
	temp_lenght = ft_strlen(temp);
	dest = malloc((next_line_lenght + temp_lenght + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	count = -1;
	while (next_line[++count] != '\0')
		dest[count] = next_line[count];
	count = -1;
	while (temp[++count] != '\0')
		dest[count + next_line_lenght] = temp[count];
	dest[count + next_line_lenght] = '\0';
	free(next_line);
	return (dest);
}

char	*ft_strchr(const char *x, int y)
{
	int	count;

	if (x == 0)
		return (0);
	count = -1;
	while (x[++count] != '\0')
		if (x[count] == (char)y)
			return ((char *)&x[count]);
	if ((char)y == '\0')
		return ((char *)&x[count]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:43:02 by cmira-am          #+#    #+#             */
/*   Updated: 2023/06/05 07:34:30 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"
#include "get_next_line_bonus.h"

#include <fcntl.h>
#include <stdio.h>

// int	main(void)
// {
// 	int	fd;
// 	int	fd1;

// 	fd = open("prueba.txt", O_RDONLY);
// 	fd1 = open("prueba2.txt", O_RDONLY);
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	// printf("%s", get_next_line(fd1));
// 	close(fd);
// }

int	main(void)
{
	int		fd;
	int		fd1;
	char	*str;

	fd = open("prueba.txt", O_RDONLY);
	fd1 = open("prueba2.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd1);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd1);
	printf("%s", str);
	free(str);
	close(fd);
	close (fd1);
}

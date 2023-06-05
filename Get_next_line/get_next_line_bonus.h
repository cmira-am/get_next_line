/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:25:57 by cmira-am          #+#    #+#             */
/*   Updated: 2023/06/01 12:12:59 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(char *x);
char	*ft_strchr(const char *x, int y);
char	*ft_strjoin(char *next_line, char *temp);
char	*get_next_line(int fd);

#endif

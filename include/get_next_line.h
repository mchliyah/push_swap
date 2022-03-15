/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:47:02 by mchliyah          #+#    #+#             */
/*   Updated: 2022/03/15 02:22:13 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//LIB NEEDED
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

//FONCTIONS
char		*get_next_line(int fd);
char		*ft_getstrdup(const char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlen(const char *str);

#endif

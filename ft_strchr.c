/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kde-rooi <kde-rooi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 17:59:39 by kde-rooi      #+#    #+#                 */
/*   Updated: 2021/01/04 13:14:15 by kde-rooi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, size_t c)
{
	size_t	i;

	i = 0;
	if (str[i] == c)
		return (&str[i]);
	while (str[i] != c && i < ft_strlen(s))
	{
		i++;
		if (str[i] == c)
			return (&str[i]);
	}
	return (NULL);
}

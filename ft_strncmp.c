/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kde-rooi <kde-rooi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 18:00:51 by kde-rooi      #+#    #+#                 */
/*   Updated: 2020/10/30 18:01:02 by kde-rooi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if ((int)n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < (int)n - 1)
		i++;
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}

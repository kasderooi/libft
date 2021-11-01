/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kde-rooi <kde-rooi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 17:57:34 by kde-rooi      #+#    #+#                 */
/*   Updated: 2020/10/30 17:57:49 by kde-rooi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	int				i;

	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	i = 0;
	if ((int)n == 0)
		return (0);
	while (st1[i] == st2[i] && i < (int)n - 1)
		i++;
	return (st1[i] - st2[i]);
}

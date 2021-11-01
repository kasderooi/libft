/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kde-rooi <kde-rooi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 17:17:11 by kde-rooi      #+#    #+#                 */
/*   Updated: 2020/10/30 17:25:21 by kde-rooi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (n == 0)
		return (NULL);
	while (i < (int)n - 1 && s[i] != (unsigned char)c)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = s[i];
	if (s[i] == (unsigned char)c)
		return (&d[i + 1]);
	return (NULL);
}

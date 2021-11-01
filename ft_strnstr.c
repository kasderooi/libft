/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kde-rooi <kde-rooi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 18:01:11 by kde-rooi      #+#    #+#                 */
/*   Updated: 2020/11/12 18:05:46 by kde-rooi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		n;
	int		h;

	i = 0;
	h = 0;
	while (i <= (int)len)
	{
		n = 0;
		while (haystack[h] == needle[n] && needle[n] && h < (int)len)
		{
			h++;
			n++;
		}
		if (!needle[n])
			return ((char*)&haystack[i]);
		i++;
		h = i;
	}
	return (NULL);
}

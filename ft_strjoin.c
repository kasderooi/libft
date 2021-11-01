/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kde-rooi <kde-rooi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 16:50:22 by kde-rooi      #+#    #+#                 */
/*   Updated: 2020/11/06 13:16:31 by kde-rooi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		len1;
	int		len2;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len1 = (int)ft_strlen(s1);
	len2 = (int)ft_strlen(s2);
	dest = ft_calloc((len1 + len2 + 1), sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < (len1 + len2))
	{
		dest[i] = (i < len1) ? s1[i] : s2[i - len1];
		i++;
	}
	return (dest);
}

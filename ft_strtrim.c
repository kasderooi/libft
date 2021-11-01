/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kde-rooi <kde-rooi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 15:06:06 by kde-rooi      #+#    #+#                 */
/*   Updated: 2020/11/05 13:29:43 by kde-rooi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strspc(char sub, char const *to_find)
{
	int i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (to_find[i] == sub)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	t_var	v;

	v.si = 0;
	v.di = 0;
	v.len = 0;
	if (!s1 || !set)
		return (NULL);
	v.c = (int)ft_strlen(s1) - 1;
	while (ft_strspc(s1[v.si], set) == 1)
		v.si++;
	while (ft_strspc(s1[v.c], set) == 1)
		v.c--;
	v.c >= 0 ? (v.len = (v.c + 1 - v.si)) : 0;
	dest = (char*)ft_calloc((v.len + 1), sizeof(char));
	if (!dest)
		return (NULL);
	while (v.si <= v.c)
	{
		v.si++;
		dest[v.di] = s1[v.si - 1];
		v.di++;
	}
	return (dest);
}

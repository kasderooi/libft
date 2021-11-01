/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kde-rooi <kde-rooi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 18:02:00 by kde-rooi      #+#    #+#                 */
/*   Updated: 2020/10/30 18:02:16 by kde-rooi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*nstr;
	char	nc;
	int		i;

	nstr = (char*)s;
	nc = (char)c;
	i = (int)ft_strlen(s);
	if (nstr[i] == nc)
		return (&nstr[i]);
	while (nstr[i] != nc && i >= 0)
	{
		i--;
		if (nstr[i] == nc)
			return (&nstr[i]);
	}
	return (NULL);
}

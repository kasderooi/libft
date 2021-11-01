/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kde-rooi <kde-rooi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 14:37:48 by kde-rooi      #+#    #+#                 */
/*   Updated: 2020/11/09 16:05:36 by kde-rooi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *str, char charset)
{
	size_t		index;
	size_t		count;

	index = 0;
	count = 1;
	while (str[index] == charset)
		index++;
	if (str[index] == '\0')
		count--;
	while (str[index] != charset && str[index] != '\0')
		index++;
	if (str[index] != '\0')
		count += ft_count_words(&str[index], charset);
	return (count);
}

static char		**ft_make_array(char **dst, char *s, struct s_var v)
{
	dst[v.c] = ft_substr(s, v.di, v.si - v.di);
	if (!dst)
	{
		while (v.c > 0)
		{
			v.c--;
			free(dst[v.c]);
		}
		return (NULL);
	}
	return (dst);
}

static char		**ft_fill_array(char **dst, char *s, char c)
{
	t_var	v;

	v.si = 0;
	v.c = 0;
	while (s[v.si] != '\0')
	{
		v.di = 0;
		while (s[v.si] == c && s[v.si] != '\0')
			v.si++;
		v.di = v.si;
		while (s[v.si] != c && s[v.si] != '\0')
			v.si++;
		if (v.c < (int)ft_count_words(s, c))
			dst = ft_make_array(dst, s, v);
		if (!dst)
			return (NULL);
		v.c++;
	}
	return (dst);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;

	if (!s)
		return (NULL);
	dst = (char**)ft_calloc(ft_count_words(s, c) + 1, sizeof(char*));
	if (!dst)
		return (NULL);
	dst = ft_fill_array(dst, (char*)s, c);
	if (!dst)
		free(dst);
	return (dst);
}

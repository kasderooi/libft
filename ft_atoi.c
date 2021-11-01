/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kde-rooi <kde-rooi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:52:28 by kde-rooi      #+#    #+#                 */
/*   Updated: 2020/11/27 13:45:42 by kde-rooi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if ((char)c == '\t' || (char)c == '\n' || (char)c == '\v'
		|| (char)c == '\f' || (char)c == '\r' || (char)c == ' ')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	nbr = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-')
		i++;
	if (str[i] == '+' && sign > 0)
		i++;
	while (i < (int)ft_strlen(str) && ft_isdigit(str[i]) == 1)
	{
		nbr *= 10;
		nbr += str[i] - 48;
		if (nbr > 9223372036854775807 || i > 19)
			return ((sign > 0) ? -1 : 0);
		i++;
	}
	return (nbr * sign);
}

// int				ft_atoi(const char *str)
// {
// 	struct s_var	v;

// 	v.si = 0;
// 	v.lres = 0;
// 	v.di = 1;
// 	while (ft_isspace(str[v.si]) == 1)
// 		v.si++;
// 	if (ft_strncmp(str, "-2147483648", 12) == 0)
// 		return (-2147483648);
// 	if (str[v.si] == '-')
// 	{
// 		v.di *= -1;
// 		v.si++;
// 	}
// 	if (str[v.si] == '+' && v.di > 0)
// 		v.si++;
// 	while (v.si < (int)ft_strlen(str) && ft_isdigit(str[v.si]) == 1)
// 	{
// 		v.lres *= 10;
// 		v.lres += str[v.si] - 48;
// 		if (v.lres > 9223372036854775807 || v.si > 19)
// 			return ((v.di > 0) ? -1 : 0);
// 		v.si++;
// 	}
// 	return (v.lres * v.di);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 18:24:27 by varichar          #+#    #+#             */
/*   Updated: 2016/08/06 18:33:29 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (haystack[i] != needle[0] && haystack[i])
		i++;
	while (haystack[i + j] == needle[j] && needle[j])
		j++;
	if (needle[j] == 0)
		return (&((char*)haystack)[i]);
	return (NULL);
}

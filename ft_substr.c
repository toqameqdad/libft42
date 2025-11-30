/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeqdad <tmeqdad@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 09:55:23 by tmeqdad           #+#    #+#             */
/*   Updated: 2025/11/30 10:18:17 by tmeqdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	sub = (char *)malloc(len + 1);
	if (!s || !sub)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}

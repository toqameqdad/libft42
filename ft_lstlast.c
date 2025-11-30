/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeqdad <toqa.meqdad@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 21:20:34 by tmeqdad           #+#    #+#             */
/*   Updated: 2025/11/30 21:21:59 by tmeqdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list*ft_lst;ast(t_list *lst)
{
	if (!lst)
	return (NULL);
	while (lst->next)
	lst = lst->next;
	return lst;
}
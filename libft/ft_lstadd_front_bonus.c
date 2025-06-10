/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:46:53 by jcesar-s          #+#    #+#             */
/*   Updated: 2025/04/15 12:28:58 by jcesar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	x = 0;
// 	int	y = 42;
// 	t_list *head = ft_lstnew((void *)&x);
// 	t_list	*node = ft_lstnew((void *)&y);
// 	printf("head = %p\n", head);
// 	printf("head->next = %p\n", head->next);
// 	printf("node = %p\n", node);
// 	ft_lstadd_front(&head, node);
// 	printf("node = %p\n", node);
// 	printf("node->next = %p\n", node->next);
// 	printf("head = %p\n", head);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguranda <pguranda@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:12:37 by pguranda          #+#    #+#             */
/*   Updated: 2022/07/29 11:33:28 by pguranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void   ft_lst_free(t_list *lst)
{
	t_list	*pointer;
	
	pointer = NULL;
	while (lst != NULL)
	{
		pointer = lst->next;
		free(lst);
		lst = NULL;
		lst = pointer;
	}
	free (pointer);
	pointer = NULL;
}

void ft_print_lst_a(t_list *a)
{
	printf("A: \n");
	while (a != NULL)
	{
		printf(" %-5d   [i: %d, ttl: %d]\n", a->content,  a->index, a->total_count);
		a = a->next;
	}
}

void ft_print_lst_b(t_list *b)
{
	printf("B: \n");
	while (b != NULL)
	{
		printf(" %-5d   [i: %d, ttl: %d]\n", b->content, b->index, b->total_count);
		b = b->next;
	}
}

// void ft_default_struct(t_list **b, int total_count)
// {

// 	(*b)->content = 0;
// 	(*b)->index = 0;
// 	(*b)->total_count = total_count;
// }

void    decrease_index(t_list **lst, int flag_for_ttl)
{
	t_list	*head;

	head = *lst;
	while(*lst != NULL)
	{
		if(flag_for_ttl == 1)
			(*lst)->total_count =(*lst)->total_count - 1;
		(*lst)->index -= 1;
		if((*lst)->index < 0)
			(*lst)->index = (*lst)->total_count - 1;
		if ((*lst)->index >= (*lst)->total_count)
			(*lst)->index = 0;
		*lst = (*lst)->next;
	}
	*lst = head;
}

void    increase_index(t_list **lst, int flag_for_ttl)
{
	t_list	*head;

	head = *lst;
	while(*lst != NULL)
	{
		if(flag_for_ttl == 1)
			(*lst)->total_count =(*lst)->total_count - 1;
		(*lst)->index += 1;
		if ((*lst)->index >= (*lst)->total_count)
			(*lst)->index = 0;
		*lst = (*lst)->next;
	}
	
	*lst  = head;
}
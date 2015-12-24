/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 19:00:04 by pconin            #+#    #+#             */
/*   Updated: 2015/12/24 20:25:18 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"

void	ft_print_board(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		i++;
	}
}

void	ft_print_list(p_list *list)
{
	int i;

	i = 1;
	while (list != NULL)
	{
		ft_putchar('\n');
		ft_putnbr(i);
		ft_putchar('\n');
		ft_print_board(list->piece);
		if (!(list->next == NULL))
			ft_putchar('\n');
		list = list->next;
		i++;
	}
}
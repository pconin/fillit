/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 17:45:31 by pconin            #+#    #+#             */
/*   Updated: 2015/12/10 19:17:28 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/headerfillit.h"
#define BUF_SIZE 4096

int		ft_check(char *buf)
{
	ft_checkmap(buf)
}

int		main(int argc, char **argv)
{
	char buf[BUF_SIZE + 1];
	int	fd;
	int ret;

	if (argc != 1)
		return (ft_error);
	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buf , BUF_SIZE);
	if (ret = NULL)
		return (ft_error);
	buf[ret] = '\0';
//	error = ft_check;
	printf("%s\n", buf);
	return (0);
}

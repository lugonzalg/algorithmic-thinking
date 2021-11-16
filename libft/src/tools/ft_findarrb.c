/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findarrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 21:02:23 by lugonzal          #+#    #+#             */
/*Updated: 2021/09/05 21:02:25 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

int	ft_findarrb(int *arr, int size, int key)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (arr[size - i - 1] == key)
			return (i);
	}
	return (-1);
}

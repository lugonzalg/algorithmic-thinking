/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duparr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:43:20 by lugonzal          #+#    #+#             */
/*Updated: 2021/09/02 15:43:23 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_duparr(int *arr, int size)
{
	int	i;
	int	*n_arr;

	i = -1;
	n_arr = (int *)malloc(sizeof(int) * size);
	if (!n_arr)
		return (NULL);
	while (++i < size)
		n_arr[i] = arr[i];
	return (n_arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findaprox.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:39:47 by lugonzal          #+#    #+#             */
/*Updated: 2021/09/02 17:41:34 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

int	ft_findaprox(int *arr, int size, int key)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (arr[i] < key)
			return (i);
	}
	return (-1);
}

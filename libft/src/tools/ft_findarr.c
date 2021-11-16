/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findarr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:47:31 by lugonzal          #+#    #+#             */
/*Updated: 2021/09/02 15:48:04 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

int	ft_findarr(int *arr, int size, int key)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (arr[i] == key)
			return (i);
	}
	return (-1);
}

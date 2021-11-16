/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:48:28 by lugonzal          #+#    #+#             */
/*Updated: 2021/09/02 13:49:10 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_arr(int **arr, int size)
{
	int	i;
	int	j;
	int	swap;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if ((*arr)[j] < (*arr)[i])
			{
				swap = (*arr)[i];
				(*arr)[i] = (*arr)[j];
				(*arr)[j] = swap;
			}
		}
	}
}

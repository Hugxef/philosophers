/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:57:32 by hugrene           #+#    #+#             */
/*   Updated: 2022/09/05 13:57:33 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	error_manager(int error)
{
	if (error == 1)
		return (printf("At least one wrong argument\n"));
	if (error == 2)
		return (printf("Fatal error when intializing mutex\n"));
	return (error);
}

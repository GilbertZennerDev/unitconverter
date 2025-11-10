/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:36:21 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 15:02:23 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "uc.h"

void	checkargs(int ac)
{
	if (ac != 4)
	{
		printf("Put args like 32 C F");
		show_units();
		exit(1);
	}
}

void	save_values(char **av, t_main *data)
{
	data->u1 = to_lower(av[2]);
	data->u2 = to_lower(av[3]);
	data->v1 = atoi(av[1]);
	data->str1 = strcat(data->u1, "_");
	data->str2 = strcat(data->str1, data->u2);
}

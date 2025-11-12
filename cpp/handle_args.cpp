/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:36:21 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 16:40:50 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "uc.hpp"

void	UnitConverter::checkargs(int ac)
{
	if (ac != 4)
	{
		std::cout << "Put args like 32 C F\n";
		show_units();
		exit(1);
	}
}

void	UnitConverter::save_values(char **av, t_main *data)
{
	data->v1 = atoi(av[1]);
    data->str2 = to_lower(av[2]) + "_" + to_lower(av[3]);
	/*data->u1 = to_lower(av[2]);
	data->u2 = to_lower(av[3]);
	data->str1 = strcat(data->u1, "_");
	data->str2 = strcat(data->str1, data->u2);*/
}

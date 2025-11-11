/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temperature.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:27:24 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/11 16:29:24 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Temperature

#include "uc.hpp"

double	c_f(double c)
{
	return (doround((c * 9 / 5.0 + 32)));
}

double	f_c(double f)
{
	return (doround((f - 32) / (9.0 / 5)));
}

double	c_k(double c)
{
	return (doround(c + 273.15));
}

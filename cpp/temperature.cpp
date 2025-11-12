/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temperature.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:27:24 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 16:02:54 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Temperature

#include "uc.hpp"

double	UnitConverter::c_f(double c)
{
	return (doround((c * 9 / 5.0 + 32)));
}

double	UnitConverter::f_c(double f)
{
	return (doround((f - 32) / (9.0 / 5)));
}

double	UnitConverter::c_k(double c)
{
	return (doround(c + 273.15));
}

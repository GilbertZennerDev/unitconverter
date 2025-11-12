/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temperature2.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:27:24 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 15:59:31 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Temperature

#include "uc.hpp"

double	UnitConverter::k_c(double k)
{
	return (doround(k - 273.15));
}

double	UnitConverter::f_k(double f)
{
	return (doround(c_k(f_c(f))));
}

double	UnitConverter::k_f(double k)
{
	return (doround(c_f(k_c(k))));
}

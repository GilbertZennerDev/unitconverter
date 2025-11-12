/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_uc.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:28:12 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 16:03:20 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Time

#include "uc.hpp"

double	UnitConverter::d_h(double d)
{
	return (24 * d);
}

double	UnitConverter::h_d(double h)
{
	return (doround(h / 24));
}

double	UnitConverter::h_m(double h)
{
	return (60 * h);
}

double	UnitConverter::m_h(double m)
{
	return (doround(m / 60));
}

double	UnitConverter::m_s(double m)
{
	return (60 * m);
}

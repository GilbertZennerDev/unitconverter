/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_uc2.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:28:12 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 15:59:31 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Time

#include "uc.hpp"

double	UnitConverter::s_h(double s)
{
	return (doround(s / 60 / 60));
}

double	UnitConverter::s_m(double s)
{
	return (doround(s / 60));
}

double	UnitConverter::d_m(double d)
{
	return (h_m(d_h(d)));
}

double	UnitConverter::m_d(double m)
{
	return (h_d(m_h(m)));
}

double	UnitConverter::d_s(double d)
{
	return (m_s(d_m(d)));
}

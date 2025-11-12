/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:32:18 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 15:59:31 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Distance

#include "uc.hpp"

double	UnitConverter::feet_yard(double f)
{
	return (doround(f / 3));
}

double	UnitConverter::mile_feet(double m)
{
	return (m * 5280);
}

double	UnitConverter::feet_mile(double f)
{
	return (doround(f / 5280));
}

double	UnitConverter::m_cm(double m)
{
	return (m * 100);
}

double	UnitConverter::cm_m(double c)
{
	return (doround(c / 100));
}

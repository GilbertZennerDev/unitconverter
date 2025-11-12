/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:32:18 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 15:59:49 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Distance

#include "uc.hpp"

double	UnitConverter::inch_cm(double i)
{
	return (i * 2.54);
}

double	UnitConverter::cm_inch(double c)
{
	return (doround(c / 2.54));
}

double	UnitConverter::foot_inch(double f)
{
	return (f * 12);
}

double	UnitConverter::inch_foot(double i)
{
	return (doround(i / 12));
}

double	UnitConverter::yard_feet(double y)
{
	return (y * 3);
}

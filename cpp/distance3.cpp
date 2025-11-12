/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance3.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:32:18 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 15:59:31 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Distance

#include "uc.hpp"

double	UnitConverter::km_m(double km)
{
	return (km * 1000);
}

double	UnitConverter::m_km(double m)
{
	return (doround(m / 1000));
}

double	UnitConverter::mile_km(double mile)
{
	return (mile * 1.60934);
}

double	UnitConverter::km_mile(double km)
{
	return (doround(km / 1.60934));
}

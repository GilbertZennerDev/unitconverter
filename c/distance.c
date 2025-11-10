/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:32:18 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 13:36:19 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Distance

#include "uc.h"

double inch_cm(double i)
{
	return (i * 2.54);
}

double cm_inch(double c)
{
	return (doround(c / 2.54));
}

double foot_inch(double f)
{
	return (f * 12);
}

double inch_foot(double i)
{
	return (doround(i / 12));
}

double yard_feet(double y)
{
	return (y * 3);
}

double feet_yard(double f)
{
	return (doround(f / 3));
}

double mile_feet(double m)
{
	return (m * 5280);
}

double feet_mile(double f)
{
	return (doround(f / 5280));
}

double m_cm(double m)
{
	return (m * 100);
}

double cm_m(double c)
{
	return (doround(c / 100));
}

double km_m(double km)
{
	return (km * 1000);
}

double m_km(double m)
{
	return (doround(m / 1000));
}

double mile_km(double mile)
{
	return (mile * 1.60934);
}

double km_mile(double km)
{
	return (doround(km / 1.60934));
}

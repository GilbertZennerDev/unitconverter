/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_uc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:28:12 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 13:32:03 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Time

#include "uc.h"

double d_h(double d)
{
	return (24 * d);
}

double h_d(double h)
{
	return (doround(h / 24));
}

double h_m(double h)
{
	return (60 * h);
}

double m_h(double m)
{
	return (doround(m / 60));
}

double m_s(double m)
{
	return (60 * m);
}

double s_m(double s)
{
	return (doround(s / 60));
}

double s_h(double s)
{
	return (doround(s / 60 / 60));
}

double d_m(double d)
{
	return (h_m(d_h(d)));
}
	
double m_d(double m)
{
	return (h_d(m_h(m)));
}

double d_s(double d) // days in seconds = days - hours - minutes - seconds
{
	return (m_s(d_m(d)));
}

double s_d(double s) //# seconds in days = seconds - minutes - hours - days
{
	return (h_d(s_h(s)));
}

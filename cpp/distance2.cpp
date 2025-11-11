/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:32:18 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/11 16:29:24 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Distance

#include "uc.hpp"

double	feet_yard(double f)
{
	return (doround(f / 3));
}

double	mile_feet(double m)
{
	return (m * 5280);
}

double	feet_mile(double f)
{
	return (doround(f / 5280));
}

double	m_cm(double m)
{
	return (m * 100);
}

double	cm_m(double c)
{
	return (doround(c / 100));
}

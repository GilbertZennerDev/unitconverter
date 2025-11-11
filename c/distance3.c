/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:32:18 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 15:22:20 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Distance

#include "uc.h"

double	km_m(double km)
{
	return (km * 1000);
}

double	m_km(double m)
{
	return (doround(m / 1000));
}

double	mile_km(double mile)
{
	return (mile * 1.60934);
}

double	km_mile(double km)
{
	return (doround(km / 1.60934));
}

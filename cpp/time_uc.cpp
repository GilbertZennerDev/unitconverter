/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_uc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:28:12 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/11 16:29:24 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Time

#include "uc.hpp"

double	d_h(double d)
{
	return (24 * d);
}

double	h_d(double h)
{
	return (doround(h / 24));
}

double	h_m(double h)
{
	return (60 * h);
}

double	m_h(double m)
{
	return (doround(m / 60));
}

double	m_s(double m)
{
	return (60 * m);
}

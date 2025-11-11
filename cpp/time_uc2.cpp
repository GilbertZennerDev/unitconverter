/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_uc2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:28:12 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/11 16:29:24 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Time

#include "uc.hpp"

double	s_h(double s)
{
	return (doround(s / 60 / 60));
}

double	s_m(double s)
{
	return (doround(s / 60));
}

double	d_m(double d)
{
	return (h_m(d_h(d)));
}

double	m_d(double m)
{
	return (h_d(m_h(m)));
}

double	d_s(double d)
{
	return (m_s(d_m(d)));
}

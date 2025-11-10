/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temperature.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:27:24 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 13:30:59 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Temperature

#include "uc.h"

double	c_f(double c)
{
	return doround((c * 9/5.0 + 32));
}
	
double	f_c(double f)
{
	return doround((f - 32) /  (9.0/5));
}

double c_k(double c)
{
	return doround(c + 273.15);
}

double k_c(double k)
{
	return doround(k - 273.15);
}

double f_k(double f)
{
	return doround(c_k(f_c(f)));
}

double k_f(double k)
{
	return doround(c_f(k_c(k)));
}

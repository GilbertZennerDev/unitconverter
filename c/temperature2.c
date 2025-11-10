/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temperature2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:27:24 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 15:09:28 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Temperature

#include "uc.h"

double	k_c(double k)
{
	return (doround(k - 273.15));
}

double	f_k(double f)
{
	return (doround(c_k(f_c(f))));
}

double	k_f(double k)
{
	return (doround(c_f(k_c(k))));
}

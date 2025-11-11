/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:32:18 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 15:18:02 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Distance

#include "uc.h"

double	inch_cm(double i)
{
	return (i * 2.54);
}

double	cm_inch(double c)
{
	return (doround(c / 2.54));
}

double	foot_inch(double f)
{
	return (f * 12);
}

double	inch_foot(double i)
{
	return (doround(i / 12));
}

double	yard_feet(double y)
{
	return (y * 3);
}

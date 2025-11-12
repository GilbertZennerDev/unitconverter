/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mass.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:34:24 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 15:59:31 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Mass / Weight

#include "uc.hpp"

double	UnitConverter::ounce_gram(double ounce)
{
	return (ounce * 28.3495);
}

double	UnitConverter::gram_ounce(double gram)
{
	return (doround(gram / 28.3495));
}

double	UnitConverter::pound_ounce(double pound)
{
	return (pound * 16);
}

double	UnitConverter::ounce_pound(double ounce)
{
	return (doround(ounce / 16));
}

double	UnitConverter::kg_gram(double kg)
{
	return (kg * 1000);
}

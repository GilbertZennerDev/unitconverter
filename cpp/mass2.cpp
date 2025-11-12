/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mass2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:34:24 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 15:59:31 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Mass / Weight

#include "uc.hpp"

double	UnitConverter::gram_kg(double gram)
{
	return (doround(gram / 1000));
}

double	UnitConverter::ton_imp_pound(double ton)
{
	return (ton * 2000);
}

double	UnitConverter::pound_imp_ton(double pound)
{
	return (doround(pound / 2000));
}

double	UnitConverter::ton_kg(double ton)
{
	return (ton * 1000);
}

double	UnitConverter::kg_ton(double kg)
{
	return (doround(kg / 1000));
}

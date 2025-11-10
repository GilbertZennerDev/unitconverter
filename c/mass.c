/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mass.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:34:24 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 13:36:22 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Mass / Weight

#include "uc.h"

double ounce_gram(double ounce)
{
	return (ounce * 28.3495);
}

double gram_ounce(double gram)
{
	return (doround(gram / 28.3495));
}

double pound_ounce(double pound)
{
	return (pound * 16);
}

double ounce_pound(double ounce)
{
	return (doround(ounce / 16));
}

double kg_gram(double kg)
{
	return (kg * 1000);
}

double gram_kg(double gram)
{
	return (doround(gram / 1000));
}

double ton_imp_pound(double ton)
{
	return (ton * 2000);
}

double pound_imp_ton(double pound)
{
	return (doround(pound / 2000));
}

double ton_kg(double ton)
{
	return (ton * 1000);
}

double kg_ton(double kg)
{
	return doround(kg / 1000);
}

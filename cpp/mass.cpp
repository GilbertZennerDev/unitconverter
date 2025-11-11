/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mass.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:34:24 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/11 16:29:24 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Mass / Weight

#include "uc.hpp"

double	ounce_gram(double ounce)
{
	return (ounce * 28.3495);
}

double	gram_ounce(double gram)
{
	return (doround(gram / 28.3495));
}

double	pound_ounce(double pound)
{
	return (pound * 16);
}

double	ounce_pound(double ounce)
{
	return (doround(ounce / 16));
}

double	kg_gram(double kg)
{
	return (kg * 1000);
}

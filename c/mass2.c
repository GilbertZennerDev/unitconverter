/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mass2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:34:24 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 15:05:51 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#Mass / Weight

#include "uc.h"

double	gram_kg(double gram)
{
	return (doround(gram / 1000));
}

double	ton_imp_pound(double ton)
{
	return (ton * 2000);
}

double	pound_imp_ton(double pound)
{
	return (doround(pound / 2000));
}

double	ton_kg(double ton)
{
	return (ton * 1000);
}

double	kg_ton(double kg)
{
	return (doround(kg / 1000));
}

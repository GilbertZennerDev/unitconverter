/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:24:51 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 16:41:37 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Helpers

#include "uc.hpp"

std::string	UnitConverter::to_lower(char *s)
{
	std::string lower;
	unsigned int	i;
	
	while (s[i])
		lower += s[i++];
	return (lower);
}

double	UnitConverter::doround(double v)
{
	return (v);
}

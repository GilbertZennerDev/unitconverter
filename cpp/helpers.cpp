/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:24:51 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/11 16:32:26 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Helpers

#include "uc.hpp"

char	*to_lower(char *s)
{
	int		i;
	char	*lower;

	lower = malloc(strlen(s) + 1);
	lower[strlen(s)] = 0;
	i = 0;
	while (i < strlen(s))
	{
		lower[i] = s[i];
		if (s[i] >= 'A' && s[i] <= 'Z')
			lower[i] += 32;
		++i;
	}
	return (lower);
}

double	doround(double v)
{
	return (v);
}

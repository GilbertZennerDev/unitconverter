/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:36:00 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/11 16:41:37 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "uc.hpp"

//################################################

void	run_tests()
{
	output(1, "D", d_s, "s");
	output(d_s(1), "s", s_d, "D");
	output(1, "D", d_m, "min");
	output(d_m(1), "min", m_d, "D");
	output(1, "ton", ton_kg, "kg");
	output(ton_kg(1), "kg", kg_ton, "ton");
	output(1, "ton", ton_imp_pound, "pound");
	output(ton_imp_pound(1), "pound", pound_imp_ton, "ton");
	output(1, "kg", kg_gram, "gram");
	output(kg_gram(1), "gram", gram_kg, "kg");
	output(1, "pound", pound_ounce, "ounce");
	output(pound_ounce(1), "ounce", ounce_pound, "pound");
	output(1, "ounce", ounce_gram, "gram");
	output(ounce_gram(1), "gram", gram_ounce, "ounce");
	output(1, "inch", inch_cm, "cm");
	output(2.54, "cm", cm_inch, "inch");
	output(1, "foot", foot_inch, "inches");
	output(12, "inches", inch_foot, "foot");
	output(1, "yard", yard_feet, "feet");
	output(3, "feet", feet_yard, "yards");
	output(1, "mile", mile_feet, "feet");
	output(mile_feet(1), "feet", feet_mile, "mile");
	output(1, "m", m_cm, "cm");
	output(m_cm(1), "cm", cm_m, "m");
	output(1, "km", km_m, "m");
	output(km_m(1), "m", m_km, "km");
	output(1, "mile", mile_km, "km");
	output(mile_km(1), "km", km_mile, "mile");
	output(32, "C", c_f, "F");
	output(89.6, "F", f_c, "C");
	output(32, "C", c_k, "K");
	output(305.15, "K", k_c, "C");
	output(32, "C", c_k, "K");
	output(305.15, "K", k_c, "C");
	output(89.6, "F", f_k, "K");
	output(305.15, "K", k_f, "F");
	output(3, "D", d_h, "H");
	output(72, "H", h_d, "D");
	output(5, "H", h_m, "M");
	output(300, "M", m_h, "H");
	output(5, "m", m_s, "s");
	output(300, "s", s_m, "m");
	output(1, "d", d_s, "s");
	output(86400, "s", s_d, "d");
}
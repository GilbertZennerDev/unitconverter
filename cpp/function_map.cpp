/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   function_map.c									 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: gzenner <gzenner@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/11/10 14:17:14 by gzenner		   #+#	#+#			 */
/*   Updated: 2025/11/10 14:59:55 by gzenner		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "uc.hpp"

double	UnitConverter::convert(const std::string& type, double value) const {
        // Now you can use std::map methods on s_function_map
        auto it = s_function_map.find(type); // FIX: using .find() is now valid
        if (it != s_function_map.end()) {    // FIX: using .end() is now valid
            return it->second(value);
        }
        throw std::invalid_argument("Unknown conversion type: " + type);
    }

const std::map<std::string, ConversionFunction> UnitConverter::s_function_map = {
	// --- Temperature Conversions ---
{"c_f", UnitConverter::c_f},
{"f_c", UnitConverter::f_c},
{"c_k", UnitConverter::c_k},
{"k_c", UnitConverter::k_c},
{"f_k", UnitConverter::f_k},
{"k_f", UnitConverter::k_f},
	// --- Time Conversions (Assuming: d=day, h=hour, m=minute, s=second) ---
{"d_h", UnitConverter::d_h},
{"h_d", UnitConverter::h_d},
{"h_m", UnitConverter::h_m},
{"m_h", UnitConverter::m_h},
{"m_s", UnitConverter::m_s},
{"s_m", UnitConverter::s_m},
{"s_h", UnitConverter::s_h},
{"d_m", UnitConverter::d_m},
{"m_d", UnitConverter::m_d},
{"d_s", UnitConverter::d_s},
{"s_d", UnitConverter::s_d},
	// --- Distance Conversions ---
{"inch_cm", UnitConverter::inch_cm},
{"cm_inch", UnitConverter::cm_inch},
{"foot_inch", UnitConverter::foot_inch},
{"inch_foot", UnitConverter::inch_foot},
{"yard_feet", UnitConverter::yard_feet},
{"feet_yard", UnitConverter::feet_yard},
{"mile_feet", UnitConverter::mile_feet},
{"feet_mile", UnitConverter::feet_mile},
{"m_cm", UnitConverter::m_cm},
{"cm_m", UnitConverter::cm_m},
{"km_m", UnitConverter::km_m},
{"m_km", UnitConverter::m_km},
{"mile_km", UnitConverter::mile_km},
{"km_mile", UnitConverter::km_mile},
	// --- Mass / Weight Conversions ---
{"ounce_gram", UnitConverter::ounce_gram},
{"gram_ounce", UnitConverter::gram_ounce},
{"pound_ounce", UnitConverter::pound_ounce},
{"ounce_pound", UnitConverter::ounce_pound},
{"kg_gram", UnitConverter::kg_gram},
{"gram_kg", UnitConverter::gram_kg},
{"ton_imp_pound", UnitConverter::ton_imp_pound},
{"pound_imp_ton", UnitConverter::pound_imp_ton},
{"ton_kg", UnitConverter::ton_kg},
{"kg_ton", UnitConverter::kg_ton},
	// --- Null Terminator (Always required at the end) ---
{NULL, NULL} 
};

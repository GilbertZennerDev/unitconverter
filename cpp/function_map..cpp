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

t_dispatchentry	g_function_map[] = {
	// --- Temperature Conversions ---
{"c_f", c_f},
{"f_c", f_c},
{"c_k", c_k},
{"k_c", k_c},
{"f_k", f_k},
{"k_f", k_f},
	// --- Time Conversions (Assuming: d=day, h=hour, m=minute, s=second) ---
{"d_h", d_h},
{"h_d", h_d},
{"h_m", h_m},
{"m_h", m_h},
{"m_s", m_s},
{"s_m", s_m},
{"s_h", s_h},
{"d_m", d_m},
{"m_d", m_d},
{"d_s", d_s},
{"s_d", s_d},
	// --- Distance Conversions ---
{"inch_cm", inch_cm},
{"cm_inch", cm_inch},
{"foot_inch", foot_inch},
{"inch_foot", inch_foot},
{"yard_feet", yard_feet},
{"feet_yard", feet_yard},
{"mile_feet", mile_feet},
{"feet_mile", feet_mile},
{"m_cm", m_cm},
{"cm_m", cm_m},
{"km_m", km_m},
{"m_km", m_km},
{"mile_km", mile_km},
{"km_mile", km_mile},
	// --- Mass / Weight Conversions ---
{"ounce_gram", ounce_gram},
{"gram_ounce", gram_ounce},
{"pound_ounce", pound_ounce},
{"ounce_pound", ounce_pound},
{"kg_gram", kg_gram},
{"gram_kg", gram_kg},
{"ton_imp_pound", ton_imp_pound},
{"pound_imp_ton", pound_imp_ton},
{"ton_kg", ton_kg},
{"kg_ton", kg_ton},
	// --- Null Terminator (Always required at the end) ---
{NULL, NULL} 
};

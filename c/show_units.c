/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_units.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:38:00 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 14:14:01 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# Show units

#include "uc.h"

void	show_supported_units_time_distance()
{
	printf("\n=== Supported Units ===");
	printf("\n🌡️  Temperature:");
	printf("  c  → Celsius");
	printf("  f  → Fahrenheit");
	printf("  k  → Kelvin");

	printf("\n⏰  Time:");
	printf("  d  → Days");
	printf("  h  → Hours");
	printf("  m  → Minutes");
	printf("  s  → Seconds");

	printf("\n📏  Distance:");
	printf("  inch  → Inches");
	printf("  cm    → Centimeters");
	printf("  foot  → Feet");
	printf("  feet  → Feet (alias);");
	printf("  yard  → Yards");
	printf("  mile  → Miles");
	printf("  m     → Meters");
	printf("  km    → Kilometers");
}

void	show_units()
{
	show_supported_units_time_distance();
	printf("\n⚖️  Mass / Weight:");
	printf("  ounce     → Ounces");
	printf("  gram      → Grams");
	printf("  pound     → Pounds");
	printf("  kg        → Kilograms");
	printf("  ton       → Metric Tons");
	printf("  ton_imp   → Imperial Tons");

	printf("\n💡 Example usage:");
	printf("  python unit_converter.py 10 c f");
	printf("  python unit_converter.py 5 km mile\n");
}

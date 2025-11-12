/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_units.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:38:00 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/12 16:43:30 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# Show units

#include "uc.hpp"

void	UnitConverter::show_supported_units_time_distance(void)
{
	std::cout << "\n=== Supported Units ===";
	std::cout << "\n🌡️  Temperature:";
	std::cout << "  c  → Celsius";
	std::cout << "  f  → Fahrenheit";
	std::cout << "  k  → Kelvin";
	std::cout << "\n⏰  Time:";
	std::cout << "  d  → Days";
	std::cout << "  h  → Hours";
	std::cout << "  m  → Minutes";
	std::cout << "  s  → Seconds";
	std::cout << "\n📏  Distance:";
	std::cout << "  inch  → Inches";
	std::cout << "  cm    → Centimeters";
	std::cout << "  foot  → Feet";
	std::cout << "  feet  → Feet (alias;";
	std::cout << "  yard  → Yards";
	std::cout << "  mile  → Miles";
	std::cout << "  m     → Meters";
	std::cout << "  km    → Kilometers";
}

void	UnitConverter::show_units(void)
{
	show_supported_units_time_distance();
	std::cout << "\n⚖️  Mass / Weight:";
	std::cout << "  ounce     → Ounces";
	std::cout << "  gram      → Grams";
	std::cout << "  pound     → Pounds";
	std::cout << "  kg        → Kilograms";
	std::cout << "  ton       → Metric Tons";
	std::cout << "  ton_imp   → Imperial Tons";
	std::cout << "\n💡 Example usage:";
	std::cout << "  python unit_converter.py 10 c f";
	std::cout << "  python unit_converter.py 5 km mile\n";
}

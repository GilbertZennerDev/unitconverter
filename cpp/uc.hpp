/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uc.hpp                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:25:32 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/11 16:28:33 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UC_HPP
# define UC_HPP

# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <string.h>
# include <iostream>
# include <map>
# include <functional>
# include <stdexcept>

using ConversionFunction = std::function<double(double)>;

typedef double	(*t_mathfuncptr)(double);

typedef struct s_t_dispatchentry
{
	const char		*key;
	t_mathfuncptr	func;
}	t_dispatchentry;

typedef struct s_main
{
	std::string u1;
	std::string u2;
	std::string str1;
	std::string str2;
	double	v1;
	double	result;
}			t_main;

extern t_dispatchentry	g_function_map[];

class UnitConverter
{
	public:

	static const std::map<std::string, ConversionFunction> s_function_map;
	static t_mathfuncptr get_function(const std::string key);
	double convert(const std::string& type, double value) const;

	static void	show_supported_units_time_distance(void);
	static void	run(int ac, char **av);

	// Helpers
	static	std::string	to_lower(char *s);
	static	double	doround(double v);
	static	void	checkargs(int ac);
	static	void	save_values(char **av, t_main *data);

	// Tester
	static	void	run_tests(void);
	static	void	output(double v1, std::string n1, double (*f)(double), std::string n2);

	// Show Units
	static	void	show_units(void);

	//#Temperature
	static	double	c_f(double c);
	static	double	f_c(double f);
	static	double	c_k(double c);
	static	double	k_c(double k);
	static	double	f_k(double f);
	static	double	k_f(double k);

	//#Time
	static	double	d_h(double d);
	static	double	h_d(double h);
	static	double	h_m(double h);
	static	double	m_h(double m);
	static	double	m_s(double m);
	static	double	s_m(double s);
	static	double	s_h(double s);
	static	double	d_m(double d);	
	static	double	m_d(double m);
	static	double	d_s(double d);
	static	double	s_d(double s);

	//#Distance
	static	double	inch_cm(double i);
	static	double	cm_inch(double c);
	static	double	foot_inch(double f);
	static	double	inch_foot(double i);
	static	double	yard_feet(double y);
	static	double	feet_yard(double f);
	static	double	mile_feet(double m);
	static	double	feet_mile(double f);
	static	double	m_cm(double m);
	static	double	cm_m(double c);
	static	double	km_m(double km);
	static	double	m_km(double m);
	static	double	mile_km(double mile);
	static	double	km_mile(double km);

	//#Mass / Weight
	static	double	ounce_gram(double ounce);
	static	double	gram_ounce(double gram);
	static	double	pound_ounce(double pound);
	static	double	ounce_pound(double ounce);
	static	double	kg_gram(double kg);
	static	double	gram_kg(double gram);
	static	double	ton_imp_pound(double ton);
	static	double	pound_imp_ton(double pound);
	static	double	ton_kg(double ton);
	static	double	kg_ton(double kg);
};
#endif
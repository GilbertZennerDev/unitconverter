/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uc.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzenner <gzenner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:25:32 by gzenner           #+#    #+#             */
/*   Updated: 2025/11/10 15:16:00 by gzenner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UC_H
#define UC_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef double (*MathFuncPtr)(double);

typedef struct {
	const char	*key;
	MathFuncPtr	func;
}	DispatchEntry;

typedef struct	s_main {
	char	*u1;
	char	*u2;
	char	*str1;
	char	*str2;
	double	v1;
	double	result;
}	t_main;

extern DispatchEntry g_function_map[];

// Helpers

char	*to_lower(char *s);
double	doround(double v);
void	checkargs(int ac);
void	save_values(char **av, t_main *data);
void	free_data(t_main *data);

// Show Units
void	show_units();

//#Temperature

double	c_f(double c);
double	f_c(double f);
double	c_k(double c);
double	k_c(double k);
double	f_k(double f);
double	k_f(double k);

//#Time

double	d_h(double d);
double	h_d(double h);
double	h_m(double h);
double	m_h(double m);
double	m_s(double m);
double	s_m(double s);
double	s_h(double s);
double	d_m(double d);	
double	m_d(double m);
double	d_s(double d);
double	s_d(double s);

//#Distance

double	inch_cm(double i);
double	cm_inch(double c);
double	foot_inch(double f);
double	inch_foot(double i);
double	yard_feet(double y);
double	feet_yard(double f);
double	mile_feet(double m);
double	feet_mile(double f);
double	m_cm(double m);
double	cm_m(double c);
double	km_m(double km);
double	m_km(double m);
double	mile_km(double mile);
double	km_mile(double km);

//#Mass / Weight

double	ounce_gram(double ounce);
double	gram_ounce(double gram);
double	pound_ounce(double pound);
double	ounce_pound(double ounce);
double	kg_gram(double kg);
double	gram_kg(double gram);
double	ton_imp_pound(double ton);
double	pound_imp_ton(double pound);
double	ton_kg(double ton);
double	kg_ton(double kg);

#endif
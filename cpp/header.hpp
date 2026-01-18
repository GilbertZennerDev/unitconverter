#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Helpers
double doround(const double v);
void show_units();
string toLower(const string arg);

// Converters

// Temperature

const double c_f(const double c);
const double f_c(const double f);
const double c_k(const double c);
const double k_c(const double k);
const double f_k(const double f);
const double k_f(const double k);

// Time

const double d_h(const double d);
const double h_d(const double h);
const double h_m(const double h);
const double m_h(const double m);
const double m_s(const double m);
const double s_m(const double s);
const double s_h(const double s);
const double d_m(const double d);
const double m_d(const double m);
const double d_s(const double d);
const double s_d(const double s);

// Distance

const double inch_cm(const double i);
const double cm_inch(const double c);
const double  foot_inch(const double f);
const double  inch_foot(const double i);
const double  yard_feet(const double y);
const double  feet_yard(const double f);
const double  mile_feet(const double m);
const double  feet_mile(const double f);
const double  m_cm(const double m);
const double  cm_m(const double c);
const double  km_m(const double km);
const double  m_km(const double m);
const double  mile_km(const double mile);
const double  km_mile(const double km);

// Mass / Weight

const double ounce_gram(const double ounce);
const double gram_ounce(const double gram);
const double pound_ounce(const double pound);
const double ounce_pound(const double ounce);
const double kg_gram(const double kg);
const double gram_kg(const double gram);
const double ton_imp_pound(const double ton);
const double pound_imp_ton(const double pound);
const double ton_kg(const double ton);
const double kg_ton(const double kg);

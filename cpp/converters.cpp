#include "header.hpp"

// Converters

// Temperature

const double c_f(const double c){
	return doround((c * 9/5.0 + 32));}
const double f_c(const double f){
	return doround((f - 32) /  (9.0/5));}
const double c_k(const double c){
	return doround(c + 273.15);}
const double k_c(const double k){
	return doround(k - 273.15);}
const double f_k(const double f){
	return doround(c_k(f_c(f)));}
const double k_f(const double k){
	return doround(c_f(k_c(k)));}
	
// Time

const double  d_h(const double d){
	return 24 * d;}
const double  h_d(const double h){
	return doround(h / 24);}
const double  h_m(const double h){
	return 60 * h;}
const double  m_h(const double m){
	return doround(m / 60);}
const double  m_s(const double m){
	return 60 * m;}
const double  s_m(const double s){
	return doround(s / 60);}
const double  s_h(const double s){
	return doround(s / 60 / 60);}
const double  d_m(const double d){
	return h_m(d_h(d));}
const double  m_d(const double m){
	return h_d(m_h(m));}
const double  d_s(const double d){
	return m_s(d_m(d));}
const double  s_d(const double s){
	return h_d(s_h(s));}

// Distance

const double inch_cm(const double i){
	return i * 2.54;}
const double cm_inch(const double c){
	return doround(c / 2.54);}
const double  foot_inch(const double f){
	return f * 12;}
const double  inch_foot(const double i){
	return doround(i / 12);}
const double  yard_feet(const double y){
	return y * 3;}
const double  feet_yard(const double f){
	return doround(f / 3);}
const double  mile_feet(const double m){
	return m * 5280;}
const double  feet_mile(const double f){
	return doround(f / 5280);}
const double  m_cm(const double m){
	return m * 100;}
const double  cm_m(const double c){
	return doround(c / 100);}
const double  km_m(const double km){
	return km * 1000;}
const double  m_km(const double m){
	return doround(m / 1000);}
const double  mile_km(const double mile){
	return mile * 1.60934;}
const double  km_mile(const double km){
	return doround(km / 1.60934);}
	
// Mass / Weight

const double ounce_gram(const double ounce){
	return ounce * 28.3495;}
const double gram_ounce(const double gram){
	return doround(gram / 28.3495);}
const double pound_ounce(const double pound){
	return pound * 16;}
const double ounce_pound(const double ounce){
	return doround(ounce / 16);}
const double kg_gram(const double kg){
	return kg * 1000;}
const double gram_kg(const double gram){
	return doround(gram / 1000);}
const double ton_imp_pound(const double ton){
	return ton * 2000;}
const double pound_imp_ton(const double pound){
	return doround(pound / 2000);}
const double ton_kg(const double ton){
	return ton * 1000;}
const double kg_ton(const double kg){
	return doround(kg / 1000);}

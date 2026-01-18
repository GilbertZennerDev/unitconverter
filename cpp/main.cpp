#include "header.hpp"

bool chk(const string &u1, const string &v1, const string &u2, const string &v2)
{
	return (u1 == v1 and u2 == v2);
}

void printOutput(const double &value)
{
	cout << value << "\n";
}

int main(int ac, char **av)//our run() function
{
	if (ac != 4) {cout << "Put args like 32 C F\n"; show_units(); exit(1);}
	double v1;
	const string u1 = toLower(av[2]);
	const string u2 = toLower(av[3]);
	try
	{
		v1 = stod(av[1]);
	}
	catch (const exception &e)
	{
		cout << "Bad Input.\n"; return (1);
	}
	cout << "Unit Converter\n";
	//# --- Temperature ---
	if (chk(u1, "c", u2, "f")) printOutput(c_f(v1));
	else if (chk(u1, "f", u2, "c")) printOutput(f_c(v1));
	else if (chk(u1, "c", u2, "k")) printOutput(c_k(v1));
	else if (chk(u1, "k", u2, "c")) printOutput(k_c(v1));
	else if (chk(u1, "f", u2, "k")) printOutput(f_k(v1));
	else if (chk(u1, "k", u2, "f")) printOutput(k_f(v1));

	//# --- Time ---
	else if (chk(u1, "d", u2, "h")) printOutput(d_h(v1));
	else if (chk(u1, "h", u2, "d")) printOutput(h_d(v1));
	else if (chk(u1, "h", u2, "m")) printOutput(h_m(v1));
	else if (chk(u1, "m", u2, "h")) printOutput(m_h(v1));
	else if (chk(u1, "m", u2, "s")) printOutput(m_s(v1));
	else if (chk(u1, "s", u2, "m")) printOutput(s_m(v1));
	else if (chk(u1, "s", u2, "h")) printOutput(s_h(v1));
	else if (chk(u1, "d", u2, "m")) printOutput(d_m(v1));
	else if (chk(u1, "m", u2, "d")) printOutput(m_d(v1));
	else if (chk(u1, "d", u2, "s")) printOutput(d_s(v1));
	else if (chk(u1, "s", u2, "d")) printOutput(s_d(v1));

//	# --- Distance ---
	else if (chk(u1, "inch", u2, "cm")) printOutput(inch_cm(v1));
	else if (chk(u1, "cm", u2, "inch")) printOutput(cm_inch(v1));
	else if (chk(u1, "foot", u2, "inch")) printOutput(foot_inch(v1));
	else if (chk(u1, "inch", u2, "foot")) printOutput(inch_foot(v1));
	else if (chk(u1, "yard", u2, "feet")) printOutput(yard_feet(v1));
	else if (chk(u1, "feet", u2, "yard")) printOutput(feet_yard(v1));
	else if (chk(u1, "mile", u2, "feet")) printOutput(mile_feet(v1));
	else if (chk(u1, "feet", u2, "mile")) printOutput(feet_mile(v1));
	else if (chk(u1, "m", u2, "cm")) printOutput(m_cm(v1));
	else if (chk(u1, "cm", u2, "m")) printOutput(cm_m(v1));
	else if (chk(u1, "km", u2, "m")) printOutput(km_m(v1));
	else if (chk(u1, "m", u2, "km")) printOutput(m_km(v1));
	else if (chk(u1, "mile", u2, "km")) printOutput(mile_km(v1));
	else if (chk(u1, "km", u2, "mile")) printOutput(km_mile(v1));

//	# --- Mass / Weight ---
	else if (chk(u1, "ounce", u2, "gram")) printOutput(ounce_gram(v1));
	else if (chk(u1, "gram", u2, "ounce")) printOutput(gram_ounce(v1));
	else if (chk(u1, "pound", u2, "ounce")) printOutput(pound_ounce(v1));
	else if (chk(u1, "ounce", u2, "pound")) printOutput(ounce_pound(v1));
	else if (chk(u1, "kg", u2, "gram")) printOutput(kg_gram(v1));
	else if (chk(u1, "gram", u2, "kg")) printOutput(gram_kg(v1));
	else if (chk(u1, "ton_imp", u2, "pound")) printOutput(ton_imp_pound(v1));
	else if (chk(u1, "pound", u2, "ton_imp")) printOutput(pound_imp_ton(v1));
	else if (chk(u1, "ton", u2, "kg")) printOutput(ton_kg(v1));
	else if (chk(u1, "kg", u2, "ton")) printOutput(kg_ton(v1));
	else cout << "Invalid Input.\n";
	return (0);
}

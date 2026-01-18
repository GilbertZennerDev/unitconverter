#include "header.hpp"

double doround(const double v)
{
	return (v);//round(v, 2);
}

void show_units()
{
	cout << "\n=== Supported Units ===\n";
	cout << "\n🌡️  Temperature:\n";
	cout << "  c  → Celsius\n";
	cout << "  f  → Fahrenheit\n";
	cout << "  k  → Kelvin\n";

	cout << "\n⏰  Time:\n";
	cout << "  d  → Days\n";
	cout << "  h  → Hours\n";
	cout << "  m  → Minutes\n";
	cout << "  s  → Seconds\n";

	cout << "\n📏  Distance:\n";
	cout << "  inch  → Inches\n";
	cout << "  cm    → Centimeters\n";
	cout << "  foot  → Feet\n";
	cout << "  feet  → Feet (alias)\n";
	cout << "  yard  → Yards\n";
	cout << "  mile  → Miles\n";
	cout << "  m     → Meters\n";
	cout << "  km    → Kilometers\n";

	cout << "\n⚖️  Mass / Weight:\n";
	cout << "  ounce     → Ounces\n";
	cout << "  gram      → Grams\n";
	cout << "  pound     → Pounds\n";
	cout << "  kg        → Kilograms\n";
	cout << "  ton       → Metric Tons\n";
	cout << "  ton_imp   → Imperial Tons\n";

	cout << "\n💡 Example usage:\n";
	cout << "  python unit_converter.py 10 c f\n";
	cout << "  python unit_converter.py 5 km mile\n\n";
}

string toLower(const string arg)
{
	static string lower;
	static string::const_iterator it;

	lower.clear();
	it = arg.begin() - 1;
	while (++it != arg.end()) lower.push_back(static_cast<char>(tolower(*it)));
	return (lower);
}

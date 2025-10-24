'''

Length / Distance

1 inch = 2.54 cm

1 foot = 12 inches

1 yard = 3 feet

1 mile = 5280 feet

1 centimeter = 0.01 meter

1 meter = 100 centimeters

1 kilometer = 1000 meters

1 mile ≈ 1.60934 kilometers

Mass / Weight

1 ounce = 28.3495 grams

1 pound = 16 ounces

1 pound ≈ 0.453592 kilograms

1 kilogram = 1000 grams

1 ton (US) = 2000 pounds

1 ton (metric) = 1000 kilograms

Volume / Capacity

1 teaspoon = 5 milliliters

1 tablespoon = 3 teaspoons

1 fluid ounce = 2 tablespoons

1 cup = 8 fluid ounces

1 pint = 2 cups

1 quart = 2 pints

1 gallon = 4 quarts

1 liter = 1000 milliliters

Time

1 minute = 60 seconds

1 hour = 60 minutes

1 day = 24 hours

1 week = 7 days

1 year ≈ 365.25 days

Temperature

Celsius to Fahrenheit: °F = (°C × 9/5) + 32

Fahrenheit to Celsius: °C = (°F − 32) × 5/9

Celsius to Kelvin: K = °C + 273.15

'''

print("Unit Converter")

#txt = input("Usage: unit1name unit1value unit2name: ").split()
#if len(txt) != 3: print("Bad Input")

def c_f(c):
	return round((c * 9/5.0 + 32), 2)

def f_c(f):
	return round((f - 32) /  (9.0/5))

def c_k(c):
	return round(c + 273.15)

def k_c(k):
	return round(k - 273.15)
	
f = c_f(32)
c = f_c(f)
print("32 C =", f, "F")
print(f, "F =", c, "C")

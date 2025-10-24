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

def doround(v):
	return round(v, 2)


#Temperature

def c_f(c):
	return doround((c * 9/5.0 + 32))

def f_c(f):
	return doround((f - 32) /  (9.0/5))

def c_k(c):
	return doround(c + 273.15)

def k_c(k):
	return doround(k - 273.15)
	
def f_k(f):
	return doround(c_k(f_c(f)))
	
def k_f(k):
	return doround(c_f(k_c(k)))
	
#Time

def d_h(d):
	return 24 * d
def h_d(h):
	return doround(h / 24)
def h_m(h):
	return 60 * h
def m_h(h):
	return doround(h / 60)
def m_s(m):
	return 60 * m
def s_m(s):
	return doround(s / 60)
def d_s(d): # days in seconds = days - hours - minutes - seconds
	return m_s(h_m(d_h(d)))
def s_d(s): # seconds in days = seconds - minutes - hours - days
	return h_d(m_h(s_m(s)))
	
#Distance
'''Length / Distance

1 inch = 2.54 cm

1 foot = 12 inches

1 yard = 3 feet

1 mile = 5280 feet

1 centimeter = 0.01 meter

1 meter = 100 centimeters

1 kilometer = 1000 meters

1 mile ≈ 1.60934 kilometers'''

def inch_cm(i):
	return i * 2.54
def cm_inch(c):
	return doround(c / 2.54)

#Tester

def test(v1, n1, func, n2):
	print(v1, n1, '=', func(v1), n2)
	

################################################

test(32, 'C', c_f, 'F')
test(89.6, 'F', f_c, 'C')

test(32, 'C', c_k, 'K')
test(305.15, 'K', k_c, 'C')

test(32, 'C', c_k, 'K')
test(305.15, 'K', k_c, 'C')

test(89.6, 'F', f_k, 'K')
test(305.15, 'K', k_f, 'F')

test(3, 'D', d_h, 'H')
test(72, 'H', h_d, 'D')

test(5, 'H', h_m, 'M')
test(300, 'M', m_h, 'H')

test(5, 'm', m_s, 's')
test(300, 's', s_m, 'm')

test(1, 'd', d_s, 's')
test(86400, 's', s_d, 'd')

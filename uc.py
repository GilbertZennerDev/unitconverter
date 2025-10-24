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

def inch_cm(i):
	return i * 2.54
def cm_inch(c):
	return doround(c / 2.54)
def foot_inch(f):
	return f * 12
def inch_foot(i):
	return doround(i / 12)
def yard_feet(y):
	return y * 3
def feet_yard(f):
	return doround(f / 3)
def mile_feet(m):
	return m * 5280
def feet_mile(f):
	return doround(f / 5280)
def m_cm(m):
	return m * 100
def cm_m(c):
	return doround(c / 100)
def km_m(km):
	return km * 1000
def m_km(m):
	return doround(m / 1000)
def mile_km(mile):
	return mile * 1.60934
def km_mile(km):
	return doround(km / 1.60934)
	
#Mass / Weight

'''1 ounce = 28.3495 grams

1 pound = 16 ounces

1 pound ≈ 0.453592 kilograms

1 kilogram = 1000 grams

1 ton (US) = 2000 pounds

1 ton (metric) = 1000 kilograms'''

def ounce_gram(ounce):
	return ounce * 28.3495
def gram_ounce(gram):
	return doround(gram / 28.3495)
def pound_ounce(pound):
	return pound * 16
def ounce_pound(ounce):
	return doround(ounce / 16)
def kg_gram(kg):
	return kg * 1000
def gram_kg(gram):
	return doround(gram / 1000)
def ton_imp_pound(ton):
	return ton * 2000
def pound_imp_ton(pound):
	return doround(pound / 2000)
def ton_kg(ton):
	return ton * 1000
def kg_ton(kg):
	return doround(kg / 1000)

#Tester

def test(v1, n1, func, n2):
	print(v1, n1, '=', func(v1), n2)
	

################################################

test(1, 'ton', ton_kg, 'kg')
test(ton_kg(1), 'kg', kg_ton, 'ton')

#test(1, 'ton', ton_imp_pound, 'pound')
#test(ton_imp_pound(1), 'pound', pound_imp_ton, 'ton')

#test(1, 'kg', kg_gram, 'gram')
#test(kg_gram(1), 'gram', gram_kg, 'kg')

#test(1, 'pound', pound_ounce, 'ounce')
#test(pound_ounce(1), 'ounce', ounce_pound, 'pound')

#test(1, 'ounce', ounce_gram, 'gram')
#test(ounce_gram(1), 'gram', gram_ounce, 'ounce')

#test(1, 'inch', inch_cm, 'cm')
#test(2.54, 'cm', cm_inch, 'inch')

#test(1, 'foot', foot_inch, 'inches')
#test(12, 'inches', inch_foot, 'foot')

#test(1, 'yard', yard_feet, 'feet')
#test(3, 'feet', feet_yard, 'yards')

#test(1, 'mile', mile_feet, 'feet')
#test(mile_feet(1), 'feet', feet_mile, 'mile')

#test(1, 'm', m_cm, 'cm')
#test(m_cm(1), 'cm', cm_m, 'm')

#test(1, 'km', km_m, 'm')
#test(km_m(1), 'm', m_km, 'km')

#test(1, 'mile', mile_km, 'km')
#test(mile_km(1), 'km', km_mile, 'mile')

#test(32, 'C', c_f, 'F')
#test(89.6, 'F', f_c, 'C')

#test(32, 'C', c_k, 'K')
#test(305.15, 'K', k_c, 'C')

#test(32, 'C', c_k, 'K')
#test(305.15, 'K', k_c, 'C')

#test(89.6, 'F', f_k, 'K')
#test(305.15, 'K', k_f, 'F')

#test(3, 'D', d_h, 'H')
#test(72, 'H', h_d, 'D')

#test(5, 'H', h_m, 'M')
#test(300, 'M', m_h, 'H')

#test(5, 'm', m_s, 's')
#test(300, 's', s_m, 'm')

#test(1, 'd', d_s, 's')
#test(86400, 's', s_d, 'd')

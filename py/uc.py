import sys

# Converters

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
def m_h(m):
	return doround(m / 60)
def m_s(m):
	return 60 * m
def s_m(s):
	return doround(s / 60)
def s_h(s):
	return doround(s / 60 / 60)
def d_m(d):
	return h_m(d_h(d))
def m_d(m):
	return h_d(m_h(m))
def d_s(d): # days in seconds = days - hours - minutes - seconds
	return m_s(d_m(d))
def s_d(s): # seconds in days = seconds - minutes - hours - days
	return h_d(s_h(s))

	
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

# Show units

def show_units():
	print("\n=== Supported Units ===")
	print("\n🌡️  Temperature:")
	print("  c  → Celsius")
	print("  f  → Fahrenheit")
	print("  k  → Kelvin")

	print("\n⏰  Time:")
	print("  d  → Days")
	print("  h  → Hours")
	print("  m  → Minutes")
	print("  s  → Seconds")

	print("\n📏  Distance:")
	print("  inch  → Inches")
	print("  cm    → Centimeters")
	print("  foot  → Feet")
	print("  feet  → Feet (alias)")
	print("  yard  → Yards")
	print("  mile  → Miles")
	print("  m     → Meters")
	print("  km    → Kilometers")

	print("\n⚖️  Mass / Weight:")
	print("  ounce     → Ounces")
	print("  gram      → Grams")
	print("  pound     → Pounds")
	print("  kg        → Kilograms")
	print("  ton       → Metric Tons")
	print("  ton_imp   → Imperial Tons")

	print("\n💡 Example usage:")
	print("  python unit_converter.py 10 c f")
	print("  python unit_converter.py 5 km mile\n")


#Tester

def test(v1, n1, func, n2):
	print(v1, n1.upper(), '=', func(v1), n2.upper())

def chk(u1, v1, u2, v2):
	return u1 == v1 and u2 == v2

def doround(v):
	return round(v, 2)

# (The actual Program)
def run():
	USAGE = "Put args like 32 C F"
	if len(sys.argv) != 4:
		print(USAGE); show_units(); exit();
	u1 = sys.argv[2].lower()
	u2 = sys.argv[3].lower()
	try:
		v1 = float(sys.argv[1])
	except Exception as e:
		print(e); exit()

	print("Unit Converter")
	f = None #Dummy to check
	# Conversion mapping logic

	# --- Temperature ---
	if chk(u1, 'c', u2, 'f'): f = c_f
	if chk(u1, 'f', u2, 'c'): f = f_c
	if chk(u1, 'c', u2, 'k'): f = c_k
	if chk(u1, 'k', u2, 'c'): f = k_c
	if chk(u1, 'f', u2, 'k'): f = f_k
	if chk(u1, 'k', u2, 'f'): f = k_f

	# --- Time ---
	if chk(u1, 'd', u2, 'h'): f = d_h
	if chk(u1, 'h', u2, 'd'): f = h_d
	if chk(u1, 'h', u2, 'm'): f = h_m
	if chk(u1, 'm', u2, 'h'): f = m_h
	if chk(u1, 'm', u2, 's'): f = m_s
	if chk(u1, 's', u2, 'm'): f = s_m
	if chk(u1, 's', u2, 'h'): f = s_h
	if chk(u1, 'd', u2, 'm'): f = d_m
	if chk(u1, 'm', u2, 'd'): f = m_d
	if chk(u1, 'd', u2, 's'): f = d_s
	if chk(u1, 's', u2, 'd'): f = s_d

	# --- Distance ---
	if chk(u1, 'inch', u2, 'cm'): f = inch_cm
	if chk(u1, 'cm', u2, 'inch'): f = cm_inch
	if chk(u1, 'foot', u2, 'inch'): f = foot_inch
	if chk(u1, 'inch', u2, 'foot'): f = inch_foot
	if chk(u1, 'yard', u2, 'feet'): f = yard_feet
	if chk(u1, 'feet', u2, 'yard'): f = feet_yard
	if chk(u1, 'mile', u2, 'feet'): f = mile_feet
	if chk(u1, 'feet', u2, 'mile'): f = feet_mile
	if chk(u1, 'm', u2, 'cm'): f = m_cm
	if chk(u1, 'cm', u2, 'm'): f = cm_m
	if chk(u1, 'km', u2, 'm'): f = km_m
	if chk(u1, 'm', u2, 'km'): f = m_km
	if chk(u1, 'mile', u2, 'km'): f = mile_km
	if chk(u1, 'km', u2, 'mile'): f = km_mile

	# --- Mass / Weight ---
	if chk(u1, 'ounce', u2, 'gram'): f = ounce_gram
	if chk(u1, 'gram', u2, 'ounce'): f = gram_ounce
	if chk(u1, 'pound', u2, 'ounce'): f = pound_ounce
	if chk(u1, 'ounce', u2, 'pound'): f = ounce_pound
	if chk(u1, 'kg', u2, 'gram'): f = kg_gram
	if chk(u1, 'gram', u2, 'kg'): f = gram_kg
	if chk(u1, 'ton_imp', u2, 'pound'): f = ton_imp_pound
	if chk(u1, 'pound', u2, 'ton_imp'): f = pound_imp_ton
	if chk(u1, 'ton', u2, 'kg'): f = ton_kg
	if chk(u1, 'kg', u2, 'ton'): f = kg_ton
	
	if f: test(v1, u1, f, u2)
	else: print("Your input was not valid"); exit();
run()

################################################

#test(1, 'D', d_s, 's')
#test(d_s(1), 's', s_d, 'D')

#test(1, 'D', d_m, 'min')
#test(d_m(1), 'min', m_d, 'D')

#test(1, 'ton', ton_kg, 'kg')
#test(ton_kg(1), 'kg', kg_ton, 'ton')

#test(1, 'ton', ton_imp_pound, 'pound')
#test(ton_imp_pound(1), 'pound', pound_imp_ton, 'ton')

#test(1, 'kg', kg_gram, 'gram')
#test(kg_gram(1), 'gram', gram_kg, 'kg')

#test(1, 'pound', pound_ounce, 'ounce')
#test(pound_ounce(1), 'ounce', ounce_pound, 'pound')

#test(1, 'ounce', ounce_gram2, 'gram')
#test(ounce_gram(1), 'gram', gram_ounce2, 'ounce')

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

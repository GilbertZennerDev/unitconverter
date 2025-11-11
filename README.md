🌍💫 Ultimate Unit Converter ⚙️
Convert anything to anything — right from your terminal! 🎯
Simple. Fast. Accurate. Fun. 😎

🔥 What It Does
Tired of googling “convert °C to °F” or “miles to km”?
This Python command-line tool converts between dozens of Temperature 🌡️, Time ⏰, Distance 📏, and Mass ⚖️ units — instantly!
Just type:
python unit_converter.py 100 c f
and boom 💥 you get:
100 C = 212.0 F

🧠 Features
✅ Supports multiple unit categories
✅ Converts both ways (e.g., C ↔ F, km ↔ mile, etc.)
✅ Rounded for clean, readable output
✅ Works offline, 100% in Python 🐍
✅ Includes a built-in unit list helper
✅ Fully open source 💪

🌟 Supported Units
Category
Units
Examples
🌡️ Temperature
c, f, k
Celsius ↔ Fahrenheit ↔ Kelvin
⏰ Time
d, h, m, s
Days ↔ Hours ↔ Minutes ↔ Seconds
📏 Distance
inch, cm, foot, yard, mile, m, km
Miles ↔ Kilometers ↔ Feet ↔ Meters
⚖️ Mass / Weight
ounce, gram, pound, kg, ton, ton_imp
Pounds ↔ Kilograms ↔ Ounces ↔ Tons
To see the full list in your terminal:
python unit_converter.py list

🚀 Quick Start
1️⃣ Clone this repo:
git clone https://github.com/yourusername/unit-converter.git
cd unit-converter
2️⃣ Run a conversion:
python unit_converter.py 5 km mile
3️⃣ See all available units:
python unit_converter.py list

💡 Example Usages
python unit_converter.py 1 c k     # Celsius → Kelvin
python unit_converter.py 3 d h     # Days → Hours
python unit_converter.py 5 km mile # Kilometers → Miles
python unit_converter.py 10 pound kg # Pounds → Kilograms

🧩 How It Works
🧠 It uses small, well-defined functions (like c_f(), km_mile(), etc.)
⚙️ A clever dispatch system (chk() + f = conversion_function)
🧮 Rounds results neatly with doround()
💬 And outputs with a simple, readable format!

✨ Screenshots (Optional)
 🎨

🤝 Contribute
Got new units to add? 🚀
Fork the repo, add your conversions, and open a pull request! 💪
Contributions, stars ⭐, and feedback are always welcome ❤️

📜 License
🆓 MIT License — Free to use, modify, and share!

🐍 Author
Made with ❤️ in Python by Gilbert Zenner (GilbertZennerDev)
💬 "Convert smarter, not harder!"

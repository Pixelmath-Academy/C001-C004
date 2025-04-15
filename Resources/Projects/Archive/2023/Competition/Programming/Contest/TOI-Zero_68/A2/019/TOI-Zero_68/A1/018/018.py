a = int(input())
if a > 9 or a == 0:
    print("Error : Out of range")
elif a < 0:
    print("Error : Please input positive number")
else:
    roman_numerals = ["I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"]
    print(roman_numerals[a - 1])

    

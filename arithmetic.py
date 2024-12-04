import sys
sys.set_int_max_str_digits(10**6)
octa = input()
deci = int(octa, 8)
hexa = hex(deci)[2:].upper()
print(hexa)

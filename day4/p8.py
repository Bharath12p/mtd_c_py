
input_string = input("Enter a string: ")
digits = []
for char in input_string:
    if char.isdigit():
        digits.append(char)

digits = list(set(digits))
digits.sort(reverse=True)
digits_str
unique_digits = set(digits)
biggest_number = ''.join(sorted(unique_digits, reverse=True))
print("Biggest possible number:", biggest_number)

import math

def check_is_prime(number):
    for i in range(2, math.ceil(math.sqrt(number))+1):
        if number % i == 0:
            return False
    return True 

num = int(input("Enter the number to be checked"))
value = check_is_prime(num)
if value == True:
    print('Its a prime number')
else:
    print("its not")

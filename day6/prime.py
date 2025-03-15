import math

def check_is_prime(number):
    for i in range(2, math.ceil(math.sqrt(number))+1):
        if number % i == 0:
            return False
    return True 

num = int(input('Enter the number of iteration'))
for i in range(1,num):
    value = check_is_prime(i)
    if value == True:
        print(f'{i} is a prime number')
    else:
        print(f"{i} is not a prime number")

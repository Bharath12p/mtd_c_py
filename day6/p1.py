n = int(input('Enter a number < 20: '))
for i in range(1,n+1):
    print('#' * i)
    for i in range(n+1,1,-1):
        print('#' * i)

#include<stdio.h>
int main()
{
    int num1 = 0, sum = 0;
    puts("Enter the value to be checked");
    scanf("%d", &num1);
    while(num1 != 0)
    {
        sum = sum + (num1%10);
        num1 = num1 / 10;
    }
    printf("%d is the sum of the values", sum);
    return 0;
}
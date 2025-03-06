// accept the number from the user and check if it is even
#include<stdio.h>
void main()
{
    int num = 0;
    printf("Enter the number to be checked: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is even");
    else
        printf("%d is not even");

}


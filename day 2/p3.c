#include<stdio.h>
#include<math.h>

int main()
{
    int inpnum = 0;
    puts("Enter a number to check if it is perfect square");
    scanf("%d", &inpnum);
    int root = floor(sqrt(inpnum));
    if(root * root == inpnum)
        printf("%d is a perfect square", inpnum);
    else
        printf("%d is not a perfect square", inpnum);
    
    return 0;
}
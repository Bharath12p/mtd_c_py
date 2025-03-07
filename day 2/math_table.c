#include<stdio.h>

int main()
{
    int inpnum = 0, iter = 0, ans=0;
    puts("Enter the input number");
    scanf("%d",&inpnum);
    for(iter=1;iter<=10;iter++)
    {
        ans = inpnum * iter;
        printf("%d x %02d = %03d\n",inpnum ,iter ,ans);

    }
    return 0;

}
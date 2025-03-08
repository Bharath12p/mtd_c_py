#include<stdio.h>

int main()
{
    //second largest numbers
    int inpnum = 0,inpnum1 = 0, inpnum2 = 0, larnum = 0;
    puts("Enter the input number to be checked");
    scanf("%d %d %d" ,&inpnum ,&inpnum1, &inpnum2);
       if(inpnum > inpnum1 && inpnum > inpnum2)
          printf("%d is the largest number", inpnum);
       else if(inpnum1 > inpnum && inpnum1 > inpnum2)
          printf("%d is the largest number", inpnum1);
       else
          printf("%d is the largest number", inpnum2);

    return 0; 


}
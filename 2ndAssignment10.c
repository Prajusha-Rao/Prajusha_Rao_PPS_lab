#include <stdio.h> //Print factorial of no.

int main()
{
    int f=1,i,num;
printf("Enter a number ");
scanf("%d",&num);
for(i=1;i<=num;i++)

    f=f*i;
    printf("The factorial of %d is %d\n",num,f);

    return 0;
}
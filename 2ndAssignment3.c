#include <stdio.h> //Print cube of nos.

int main()
{
    int a,i;
printf("Enter a number ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    printf("Number is %d and the cube is %d\n",i,i*i*i);
}
    return 0;
}
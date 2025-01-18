#include <stdio.h> //Sum of  first n nos.

int main()
{
    int a,i,sum=0;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("The first %d natural numbers are \n",a);
for(i=1;i<=a;i++)
{
    sum=sum+i;
    printf("%d",i);
}
printf("\n The sum is %d \n",sum);
    return 0;
}
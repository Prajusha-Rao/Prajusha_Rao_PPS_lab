#include <stdio.h> //to check if the triangle can be formed

int main() {
int a,b,c,sum;
    printf("Enter first side of the triangle ");
scanf("%d",&a);
    printf("Enter second side of the triangle ");
scanf("%d",&b);
    printf("Enter third side of the triangle ");
scanf("%d",&c);
sum=a+b+c;
if(sum==180)
{
    printf("Triangle can be formed");
}
else
{
     printf("Triangle cannot be formed");
}
    return 0;
}
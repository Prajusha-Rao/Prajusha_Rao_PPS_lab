#include<stdio.h> //to check if the triangle is equilateral,etc

int main(){
      int a,b,c;
      printf("Enter first side of the triangle ");
scanf("%d",&a);
    printf("Enter second side of the triangle ");
scanf("%d",&b);
    printf("Enter third side of the triangle ");
scanf("%d",&c);
if(a==b&&b==c)
{
    printf("It is an equilateral triangle");
}
else if(a==b||a==c||b==c)
{
     printf("It is an isosceles triangle");
}
else
{
     printf("It is an scalene triangle");
}
    return 0;
}
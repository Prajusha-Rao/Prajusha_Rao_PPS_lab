#include <stdio.h> //Simple Calculator

int main()
{
    float a,b,result;
    int c;
    printf("1 for addition.\n2 for subtraction.\n3 for Multiplication.\n4 for division.\n");
    printf("Enter the no.: ");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Enter a number");
        scanf("%f",&a);
        printf("Enter another number");
        scanf("%f",&b);
     result=a+b;
     printf("Result: %f",result);
    }
    else if(c==2)
    {
        printf("Enter a number");
        scanf("%f",&a);
        printf("Enter another number");
        scanf("%f",&b);
        result=a-b;
     printf("Result: %f",result);
    }
    else if(c==3)
    {
        printf("Enter a number");
        scanf("%f",&a);
        printf("Enter another number");
        scanf("%f",&b);
        result=a*b;
        printf("Result: %f",result);
    }
    else if (c == 4)
    {
        printf("Enter a number");
        scanf("%f",&a);
        printf("Enter another number");
        scanf("%f",&b);
            result = a / b;
            printf("Result: %f", result);
        }
    else
    {
        printf("Error: Invalid operation");
    }
    return 0;
}
 //strong no.
#include <stdio.h> 

void main()  
{  
    int i, n, n1, s1 = 0, j; 
    long fact; 
    printf("\n\nCheck whether a number is Strong Number or not:\n ");
    printf("----------------------------------------------------\n");

    printf("Input a number to check whether it is Strong number: ");
    scanf("%d", &n);
    n1 = n; 


    for (j = n; j > 0; j = j / 10) 
    {  
        fact = 1;
        for (i = 1; i <= j % 10; i++)  
        {  
            fact = fact * i;  
        }  
        s1 = s1 + fact; 
    }  

    if (s1 == n1)  
    {  
        printf("\n%d is Strong number.\n\n", n1); 
    }  
    else  
    {  
        printf("\n%d is not Strong number.\n\n", n1); 
    }  
}
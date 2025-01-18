#include <stdio.h> //Print triangle asterisk

int main()
{
    int j,i,rows;
printf("Enter a number of rows ");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
    for(j=1;j<=i;j++)
    printf("*");
    printf("\n");
}
    return 0;
}
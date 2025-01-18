#include <stdio.h> //Print triangle with increased by 1 no.

int main()
{
    int j,i,rows,k=1;
printf("Enter a number of rows ");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
    for(j=1;j<=i;j++)
    printf("%d",k++);
    printf("\n");
}
    return 0;
}
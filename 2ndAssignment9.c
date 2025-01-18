#include <stdio.h> //Print pyramid with increased by 1 no.

int main()
{
    int j,i,rows,k,t=1,spc;
printf("Enter a number of rows ");
scanf("%d",&rows);

spc=rows+4-1;

for(i=1;i<=rows;i++)
{
    for(k=spc;k>=1;k--)
    {
    printf(" ");
    }
for(j=1;j<=i;j++)
{
    printf("%d",t++);
}
printf("\n");
spc--;
}
    return 0;
}
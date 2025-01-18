#include <stdio.h> //Print pyramid with repeat no.

int main()
{
    int j,i,rows,k,spc;
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
    printf("%d",i);
}
printf("\n");
spc--;
}
    return 0;
}
//Print squares and sum
#include <stdio.h>

int main() {
    int i,n,sum=0;
    printf("Input the number of terms ");
    scanf("%d",&n);
printf("\n The squares of natural numbers upto %d are ",n);
for(i=1;i<=n;i++)
{
   printf("%d ",i*i);
   sum+=i*i;
}
printf("\nThe sum of squares of natural numbers upto %d terms is: ",n,sum);
    return 0;
}
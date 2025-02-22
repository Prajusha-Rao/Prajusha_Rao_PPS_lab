//Decimal to binary
#include <stdio.h>  
#include <stdlib.h> 


char *decimal_to_binary(int dn)
{
  int i, j, temp; 
  char *ptr;      
  temp = 0;      
  ptr = (char*)malloc(32+1); 

  
  for (i = 31 ; i >= 0 ; i--)
  {
    j = dn >> i; 
    if (j & 1)   
      *(ptr+temp) = 1 + '0';
    else
      *(ptr+temp) = 0 + '0';
    temp++;
  }

  *(ptr+temp) = '\0'; 
  return  ptr;
}

int main()
{
  int dn;
  char *ptr; 
  printf("Input a decimal number: ");
  scanf("%d", &dn); 

  ptr = decimal_to_binary(dn); 

  printf("Binary number equivalent to said decimal number is: %s", ptr); 

  free(ptr); 
  return 0; 
}
 
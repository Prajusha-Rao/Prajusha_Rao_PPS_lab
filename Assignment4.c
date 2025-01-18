#include <stdio.h> //to check if the character is digit,etc

int main()
{
char ch;
    printf("Enter any character ");
scanf("%c",&ch);
if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
{
    printf("The character '%c' is an alphabet",ch);
}
else if(ch>='0' && ch<='9')
{
     printf("The character '%c' is a number",ch);
}
else
{
   printf("The character '%c' is a special character",ch);
}
    return 0;
}

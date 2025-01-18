#include <stdio.h> //to check if the character is a vowel or consonant

int main()
{
char c;
    printf("Enter any alphabet ");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
    printf("The character '%c' is an Vowel",c);
}
else
{
   printf("The character '%c' is a consonant",c);
}
    return 0;
}
#include<stdio.h>

int main(){
      int a;
  printf("\n Enter Year you want to check:- \n ");
  scanf("%d", &a);
  
  if (( Year%400 == 0) || (( Year%4 == 0 ) && ( Year%100 != 0))){
      printf("\n Given Year is a Leap Year. \n");
  }
  else{
      printf("\n Given Year is not a Leap Year. \n");
  }
   return 0;
}

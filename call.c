#include <stdio.h>
int myFunction()
{
  printf("I just got executed!");
  return 100;
}
int main() 
{
 int a;
 a=myFunction(); 
 printf("%d\n",a);
 return 0;
}
 

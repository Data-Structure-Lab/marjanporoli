#include<stdio.h>
void myFunction(int a)
{
 printf("a in fun1 is %d\n",a);
 a=75;
 printf("a in fun2 is %d\n",a);
}
void main()
{
 int a=3;
   printf("a in main1=%d\n",a);
   myFunction(a);
   printf("a in main2=%d\n",a);
}  

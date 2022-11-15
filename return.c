#include<stdio.h>
int myFunction(int x,int y)
{
  return x+y;
}
void main()
{
 int a,b;
 printf("enter a and b : ");
 scanf("%d %d",&a,&b);
 int result=myFunction(a,b);
 printf("Result is=%d",result);
}

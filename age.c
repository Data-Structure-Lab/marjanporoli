#include<stdio.h>
void main()
{
 int myAge=22;
 int* ptr=&myAge;
 printf("My age is: %d\n",myAge);
 printf("My adress is: %p\n",&myAge);
 printf("pointer is: %p\n",ptr);
}

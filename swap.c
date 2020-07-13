#include<stdio.h>
int main()
{
 int a,b;
 printf("SWAPPING OF TWO NUMBERS\n\n");
 printf("Enter any two numbers:");
 scanf("%d %d",&a,&b);
 printf("Before swaping the numbers are:%d %d",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nAfter swaping the numbers are %d %d",a,b);
 return 0;
}

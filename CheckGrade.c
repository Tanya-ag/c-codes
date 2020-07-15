#include<stdio.h>
int main()
{
  printf("TO TELL THE GRADE OF STUDENT BY TAKING MARKS AS INPUT\n\n");
  int m;
  printf("Enter the marks scored:");
  scanf("%d",&m);
  if(m>=85)
  {
    printf("Your grade is A.");
  }
  else if(m>=70)
  {
    printf("Your grade is B.");
  }
  else if(m>=55)
  {
    printf("Your grade is C.");
  }
  else if(m>=40)
  {
    printf("Your grade is D.");
  }
  else
  {
    printf("Your grade is F.");
  }
  return 0;
}

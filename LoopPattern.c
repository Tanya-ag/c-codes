#include<stdio.h>
int main()
{
  int i,j,n;
  printf("TO MAKE A PATTERN OF A RIGHT ANGLE TRIANGLE OF 01");
  printf("\n Enter the no. of rows:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
     printf("01");
    }
    printf("\n");
  }
  return 0;
}

//add int add
#include<stdio.h>
int add(int a, int b , int c, int d)
{
  int s=a+b+c+d;
  return s;
}
int main()
{
  int a,b,c,d,sum;
  printf("Enter numbers to be added");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  sum=a+b+c+d;
  printf("the sum of %d+%d+%d+%d is %d",a,b,c,d,sum);
  return 0;
}
  

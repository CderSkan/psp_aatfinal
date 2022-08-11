//Write your code here 
#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c,root1,root2,discriminant;
  char i;
  
  printf("enter the co efficient and constant");
  scanf("%f%f%f",&a,&b,&c);
  discriminant=b*b-(4*a*c);
  if(discriminant>0)
  {
    printf("the roots are real and distinct \n");
  root1=(-b+sqrt(discriminant))/2*a;
  root2=(-b-sqrt(discriminant))/2*a;
  printf("the roots are %f %f",root1,root2);
}
  if(discriminant==0)
  {
    printf("the roots are real and equal \n");
  root1=(-b+sqrt(discriminant))/2*a;
  root2=(-b-sqrt(discriminant))/2*a;
   printf("the roots are %f %f",root1,root2);
}
  if(discriminant<0)
  {
    printf("roots are complex conjugate \n");
   root1=-b/2*a;
  root2=(-b-sqrt(discriminant))/2*a;
  printf("the roots are %f+i%f and %f-i%f",root1,root2,root1,root2);
}
  return 0;
}
  

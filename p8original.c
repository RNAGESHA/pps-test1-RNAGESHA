#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter the number:\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float x=n/4;
  float a;
  a=0.5*(x + (n/x));
  while( fabs(x - a)>0.000001)
  {
    x = a;
    a=0.5*(x + (n/x));
  }
  return a;
}
void output(float n, float a)
{
  printf("The square root of %f is %f\n",n,a);
}
int main()
{
  float n,a;
  n=input();
  a=my_sqrt(n);
  output(n,a);
  return 0;
}
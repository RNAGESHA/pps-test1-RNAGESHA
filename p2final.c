#include<stdio.h>
int input()
{
  int a;
  printf("enter the two numbers\n");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int sum;
  sum = a + b;
  return sum;
}
void output(int a,int b,int sum)
{
  printf("the sum of %d and %d is %d",a,b,sum);
}
int main()
{
  int a=input();
  int b=input();
  int sum=add(a,b);
  output(a,b,sum);
  return 0;
}


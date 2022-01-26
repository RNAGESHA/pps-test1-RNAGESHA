#include<stdio.h>
void input(int *a,int *b)
{
printf("enter the two number\n");
scanf("%d %d",a,b );
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("the sum of %d and %d is %d\n",a,b,sum);
}
int main()
{
  int x,y,sum;
  input(&x,&y);
  add(x,y,&sum);
  output(x,y,sum);
  return 0;
}

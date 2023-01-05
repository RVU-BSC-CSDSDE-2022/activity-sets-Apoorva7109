#include <stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main(){
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
}
int input(){
  int number;
  printf("enter the two numbers:\n");
  scanf("%d",&number);
  return number;
}
int add(int a, int b)
{
  int s;
  s=a+b;
  return s;
}
void output(int a, int b, int sum)
{
  printf("the sum of the two numbers is %d",sum);
}
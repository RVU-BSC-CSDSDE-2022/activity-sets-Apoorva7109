#include<stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
  int fibo,n;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}

int input(){
  int number;
  printf("enter the number:\n");
  scanf("%d",&number);
  return number;
}

int find_fibo(int n){
  int a=0,b=1,c,i;
  if(n==0)
    return a;
  for(i=2;i<=n;i++)
  {
    c=a+b;
    a=b;
    b=c;
  }
  return c;
}

void output(int n,int fibo){
  printf("The nth number of the series is %d\n",fibo);
}
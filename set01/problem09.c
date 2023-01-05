#include<stdio.h>
#include<math.h>

int input();
float sqrroot(float s);
void output(float s,float res);

int main(){
  int res,n;
  n=input();
  res=sqrroot(n);
  output(n,res);
  return 0;
}

int input(){
  float n;
  printf("enter the number to find the square root\n");
  scanf("%f",&n);
  return n;
}

float sqrroot(float s){
  float x0;
  x0=2;
  while(fabs(x0*x0-s) >0.0001){
    printf("Guess:%f\n",x0);
    x0=(x0+s/x0)/2;
  }
  return x0;
}

void output(float s,float res){
  printf("the square root is %f",res);
}
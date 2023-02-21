#include<stdio.h>

int input(x); 
float borga_X(int x);
void output(int x, float result);

int main(){
  int x;
  float result;
  x=input();
  result=borga_X(x);
  output(x,result);
  return 0;
}

int input(int x){
  int number;
  printf("enter the number:\n");
  scanf("%d",&number);
  return number;
}

float borga_X(int x){
  float borga,y,fac,pow;
  int i;
  fac=1.0;
  pow=1.0;
  y=0.0;
  borga=0.0;
  i=1;
  while(1){
    y=pow/fac;
    fac=fac*(i*2)*(i*2+1);
    pow=pow*x;
    i++;
    borga=y+borga;
    if(y<0.000001){
      break;
    }
  }
  return borga;
}

void output(int x,float result){
  printf("borga(%d)=%f\n",x,result);
}
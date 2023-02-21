#include<stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
  int a,b;
  a=input();
  b=input();
  int gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}

int input(){
  int digit;
  printf("enter the number:");
  scanf("%d",&digit);
  return digit;
}

int find_gcd(int a, int b){
int i;
  for(i=2;i<=a || i<=b;i++){
    printf("%d",i);
    if(a%i==0 || b%i==0){
      return i;
    }
  }
}

void output(int a,int b,int gcd){
  printf("G.C.D of %d and %d is %d",a,b,gcd);
}
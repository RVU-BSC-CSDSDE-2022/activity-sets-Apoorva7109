#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main() {
  int num1,num2,den1,den2;
  int res_num,res_den;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&res_num,&res_den);
  output(num1,den1,num2,den2,res_num,res_den);
  return 0;
}

void input(int *num1, int *den1, int *num2, int *den2) {
  printf("Enter the first fraction: ");
  scanf("%d %d",num1,den1);
  printf("Enter the second fraction: ");
  scanf("%d %d",num2,den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
  int lcm,gcd,i;
  for(i=1;i<=den1 || i<=den2; i++) {
    if(den1%i==0 && den2%i==0) {
      gcd = i;
    }
  }
  lcm = (den1*den2)/gcd;
  num1=num1*(lcm/den1);
  num2=num2*(lcm/den2);
  *res_num = num1 + num2;
  *res_den = lcm;
  for(i=1;i<=*res_num || i<=*res_den; i++) {
    if(*res_num%i==0 && *res_den%i==0) {
      *res_num = *res_num/i;
      *res_den = *res_den/i;
    }
  }
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den) {
  printf("%d/%d + %d/%d = %d/%d \n",num1,den1,num2,den2,res_num,res_den);
}
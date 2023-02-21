#include <stdio.h>
#include <math.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main() {
  int n;
  float x,result;
  n=input_degree();
  float a[n];
  input_coefficients(n,a);
  x=input_x();
  result=evaluate_polynomial(n,a,x);
  output(n,a,x,result);
  return 0;
}

int input_degree() {
  int degree;
  printf("Enter the degree: ");
  scanf("%d",&degree);
  return degree;
}

void input_coefficients(int n, float a[n]) {
  int i;
  for(i=0;i<n+1;i++) {
    printf("Enter a number: ");
    scanf("%f",&a[i]);
  }
}

float input_x() {
  float x_val;
  printf("Enter the value of x: ");
  scanf("%f",&x_val);
  return x_val;
}

float evaluate_polynomial(int n, float a[n], float x) {
  int i;
  float res;
  res = a[0];
  for(i=1;i<n+1;i++) {
    res = res * x + a[i];
  }
  return res;
}

void output(int n, float a[n], float x, float result) {
  int i;
  printf("H(%d, ",n);
  for(i=0;i<n;i++) {
    printf("%.0f, ",a[i]);
  }
  printf("%.0f) = %.0f \n",a[i],result);
}
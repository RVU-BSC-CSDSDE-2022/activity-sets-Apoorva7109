//To add two numbers using pass by reference

#include <stdio.h>

int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main() {
  int a, b, sum;
  a = input();
  b = input();
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}

int input() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  return number;
}

void add(int a, int b, int *sum) {
  *sum = a + b;
}

void output(int a, int b, int sum) {
  printf("The sum of %d and %d is %d \n", a, b, sum);
}
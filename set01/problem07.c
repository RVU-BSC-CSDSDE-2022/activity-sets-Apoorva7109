#include <stdio.h>

int input_n();
int sum_n_nos(int);
void output(int n, int sum);

int main() {
  int n, sum;
  n = input_n();
  sum = sum_n_nos(n);
  output(n,sum);  
  return 0;
}

int input() {
  int digit;
  printf("Enter the number till where sum has to be found \n");
  scanf("%d", &digit);
  return digit;
}

int sum_n_nos(int x) {
  int add,i;
  add=0;
  for(i=1; i<=x; i++) {
    add=i+add;
  }
  return add;
  }

void output(int n, int sum) {
  printf("The sum of natural numbers till %d is %d \n", n, sum);
}
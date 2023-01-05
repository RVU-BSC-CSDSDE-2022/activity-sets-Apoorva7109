#include <stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main() {
  int n, sum;
  n = input_n();
  sum = sum_n_nos(n);
  output(n,sum);  
  return 0;
}

int input_n() {
  int digit;
  printf("Enter the number till where sum has to be found \n");
  scanf("%d", &digit);
  return digit;
}

int sum_n_nos(int n) {
  int add,i;
  add=0;
  for(i=1; i<=n; i++) {
    add=i+add;
  }
  return add;
  }

void output(int n, int sum) {
  printf("The sum of natural numbers till %d is %d \n", n, sum);
}
//To find the nCr of given n and r

#include <stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main() {
  int n,r;
  int result;
  input_n_and_r(&n, &r);
  result=nCr(n,r);
  output(n,r,result);
  return 0;
}

void input_n_and_r(int *n, int *r) {
  printf("Enter the value for n: ");
  scanf("%d",n);
  printf("Enter the value for r: ");
  scanf("%d",r);
}

int nCr(int n, int r) {
  int ncr;
  int n_fac,r_fac,diff_fac,diff,i;
  diff=n-r;
  n_fac=1;
  r_fac=1;
  diff_fac=1;
  for(i=1;i<=n;i++) {
    n_fac=n_fac*i;
  }
  for(i=1;i<=r;i++) {
    r_fac=r_fac*i;
  }
  for(i=1;i<=diff;i++) {
    diff_fac=diff_fac*i;
  }
  ncr=(n_fac)/(r_fac * diff_fac);
  return ncr;
}

void output(int n, int r, int result) {
  printf("for n = %d and r = %d, nCr = %d \n",n,r,result);
}
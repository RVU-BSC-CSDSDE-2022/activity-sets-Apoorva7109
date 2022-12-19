#include <stdlib.h>
#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main(void) {
  float n, sqrroot;
  n = input();
  sqrroot = square_root(n);
  output(n, sqrroot);
  return 0;
}

float input() {
  float digit;
  printf("Enter number: ");
  scanf("%f",&digit);
  return digit;
}

float square_root(float n) {
  float sqr,ini,nw;
  ini=n/2;
  while(1) {
    nw=(ini+(n/ini))/2.0;
    if(nw==ini) {
      sqr=nw;
      break;
    }
    else {
      ini=nw;
    }
  }
  return sqr;
}

void output(float n, float sqrroot) {
  printf("Square root of %f is %f \n", n, sqrroot);
}
#include<stdio.h>
struct complex {
float real;
float imaginary;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);


int main(){
  complex a,b,sum;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b,sum);
  return 0;
}

Complex input_complex(){
  complex n;
  printf("enter the real part:\n");
  scanf("%f",&n.real);
  printf("enter the imaginary part:\n");
  scanf("%f",&n.imaginary);
  return n;
}

Complex add_complex(Complex a, Complex b){
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}

void output(Complex a, Complex b, Complex sum){
  printf("The sum of %f+i%f and %f+i%f is %ff+i%f",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
#include <stdio.h>

struct complex
{
float real;
float imaginary;
};
typedef struct complex complex;

complex input_complex();
complex add_complex(complex a, complex b);
void output(complex a, complex b, complex sum);

int main()
{
  complex a, b,sum;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b,sum);
  return 0;
}
complex input_complex()
{
  complex a;
  printf("enter the real part\n");
  scanf("%f, &a.real");
  printf("enter the imaginary\n");
  scanf("%f, &a.imaginary");
  return a;
}
void output(complex a, complex b, complex sum)
{
   printf("The sum of %f+i%f and %f+i%f is %f+i%f\n",a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary );
}
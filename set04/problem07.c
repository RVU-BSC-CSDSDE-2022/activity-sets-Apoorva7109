#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main() {
  Fraction f1, f2, sum;
  f1=input_fraction();
  f2=input_fraction();
  sum=add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
}

Fraction input_fraction() {
  Fraction f;
  printf("Enter the fraction: ");
  scanf("%d %d",&f.num,&f.den);
  return f;
}

int find_gcd(int a, int b) {
  int i,hcf;
  for(i=1;i<=a || i<=b; i++) {
    if(a%i==0 && b%i==0) {
      hcf=i;
    }
  }
  return hcf;
}

Fraction add_fractions(Fraction f1, Fraction f2) {
  Fraction result;
  Fraction f3,f4;
  int i;
  int gcd,lcm;
  gcd=find_gcd(f1.den,f2.den);
  lcm=(f1.den*f2.den)/gcd;
  f1.num = f1.num * lcm/f1.den;
  f2.num = f2.num * lcm/f2.den;
  result.num = f1.num + f2.num;
  result.den = lcm;
  for(i=1;i<=result.num || i<=result.den; i++) {
    if(result.num%i==0 && result.den%i==0) {
      result.num = result.num/i;
      result.den = result.den/i;
    }
  }
  return result;
}

void output(Fraction f1, Fraction f2, Fraction sum) {
  printf("%d/%d + %d/%d = %d/%d \n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
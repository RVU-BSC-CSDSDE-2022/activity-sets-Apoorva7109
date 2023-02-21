#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main() {
  int n;
  n=input_n();
  Fraction f[n],sum;
  input_n_fractions(n,f);
  sum = add_n_fractions(n,f);
  output(n,f,sum);
  return 0;
}

int input_n() {
  int elements;
  printf("Enter number of elements in the array: ");
  scanf("%d",&elements);
  return elements;
}

Fraction input_fraction() {
  Fraction f;
  printf("Enter a fraction: ");
  scanf("%d %d",&f.num,&f.den);
  return f;
}

void input_n_fractions(int n, Fraction f[n]) {
  int i;
  for(i=0;i<n;i++) {
    f[i]=input_fraction();
  }
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
  Fraction res={0,0};
  int i,gcd,lcm;
  gcd=find_gcd(f1.den,f2.den);
  lcm=(f1.den*f2.den)/gcd;
  f1.num = f1.num * lcm/f1.den;
  f2.num = f2.num * lcm/f2.den;
  res.num=f1.num+f2.num;
  res.den=lcm;
  return res;
}

Fraction add_n_fractions(int n, Fraction f[n]) {
  Fraction result={f[0].num,f[0].den};
  int i;
  for(i=1;i<n;i++) {
    result=add_fractions(f[i],result);
  }
  for(i=1;i<=result.num || i<=result.den; i++) {
    if(result.num%i==0 && result.den%i==0) {
      result.num = result.num/i;
      result.den = result.den/i;
    }
  }
  return result;
}

void output(int n, Fraction f[n], Fraction sum) {
  int i;
  for(i=0;i<n-1;i++) {
    printf("%d/%d + ",f[i].num,f[i].den);
  }
  printf("%d/%d = %d/%d \n",f[i].num,f[i].den,sum.num,sum.den);
}
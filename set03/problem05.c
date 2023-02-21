#include<stdio.h>
#include<math.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main(){
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
  return 0;
  }

int input_array_size(){
  int number;
  printf("enter the size of array:\n");
  scanf("%d",&number);
  return number;
}

void init_array(int n,int a[n])
{
  for(int i=0;i<=n;i++)
    {
      a[i]=i;
    }
}

void erotosthenes_sieve(int n,int a[n])
{
  int i,p;
  for(i=2;i<sqrt(n);i++)
    {
      for(p=2;p<=n/i;p++)
        {
          a[i*p]=0;
        }
    }
}

void output(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]>1)
      {
        printf("%d ",a[i]);
      }
    }
}


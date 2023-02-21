#include<stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main(){
  int n;
  float avg;
  n=input_n();
  int a[n];
  input(n,a);
  avg=odd_average(n,a);
  output(avg);
  return 0;
}

int input_n(){
  int digits;
  printf("enter the number of digits:\n");
  scanf("%d",&digits);
  return digits;
}

void input(int n, int a[n]){
  int i;
  for(i=0;i<n;i++){ 
    printf("enter the number:\n");
    scanf("%d",&a[i]);
  }
}

float odd_average(int n, int a[n]){
  int i;
  float result,sum,count;
  sum=0.0;
  for(i=0;i<n;i++){
    if(a[i]%2!=0){
      sum=a[i]+sum;
      count=count+1;
    }
  }
  result=sum/count;
  return result;
}

void output(float avg){
  printf("The average of the odd numbers in the array is %.0f",avg);
}
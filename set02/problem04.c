#include<stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main(){
  int n,sum;
  n=input_array();
  int a[n];
  sum=sum_composite_number(n,a);
  output(n,a,sum);
  return 0;
}

int input_array_size(){
  int digit;
  printf("Input array size\n");
  scanf("%d",&digit);
  return digit;
}

void input_array(int n, int a[n]){
  for(int i=0;i<n;i++){
    scanf=("%d",&a[i]);
  }
}

int sum_composite_numbers(int n, int a[n]){
  int result,i,k,count;
  result=0;
  for(i=0;i<n;i++){
  count=0;
    for(k=1;k<=n;k++){
      if(a[i]%k==0){
        count=count+1;
      }
    }
    if(count>2){
      result=result+a[i];
    }
  }
  return result;
}

void output(int sum){
  printf("The sum is:%d\n",sum);
}
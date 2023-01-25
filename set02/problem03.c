#include<stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main(){
  int n,result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return 0;
}

int input_number(){
  int digit;
  printf("enter the digit:");
  scanf("%d",&digit);
  return digit;
}

int is_composite(int n){
  int i,result;
  for(i=1;i<=n;i++){
    if(n%i==0){
      result=result+1;
    }
  }
  return result;
}

void output(int n,int result){
  if (result==2){
    printf("%d is not a composite number.It is a prime number",n);
    }
  else if (result>2){
      printf("%d is a composite number",n);
    }
    else printf("1 is a unique number");
  }
  

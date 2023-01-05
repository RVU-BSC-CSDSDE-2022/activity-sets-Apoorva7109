#include <stdio.h>
 int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main();
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest= compare(a,b,c,*largest);
  return 0;
}

int input(){
  int comp;
  printf("enter the number:");
  scanf("%d", &comp);
  return comp;
}

void compare(int a ,int b, int c, int *largest){
  if((a>b && a>c)){
    *largest=a;
    }
  else if (b>c){
    *largest=b;
  }
  else{
    *largest=c;
  }
  }
  return largest;
}


void output(int a, int b, int c, int largest)
{
  printf("The largest of %d,%d and %d is %d",a,b,c,largest);
  }
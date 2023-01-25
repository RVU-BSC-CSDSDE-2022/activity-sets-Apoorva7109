#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(){
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}

int input_side(){
  int side;
  printf("enter the side\n");
  scanf("%d",&side);
  return side;
}

int check_scalene(int a, int b, int c){
  int triangle=0;
  if(a==b || a==c|| b==c){
   triangle=1;
   }
  return triangle;
}

void output(int a, int b, int c, int isscalene){
  if(isscalene==1)
  printf("triangle is not scalene");
  else{
    printf("triangle is scalene");
    }
}
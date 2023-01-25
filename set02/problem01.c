#include <stdio.h>

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main(){
  float base,height,area;
  input(base,height);
  return 0;
}

void input(float base, float height){
 printf("enter the base:\n");
  scanf("%f",&base);
  printf("enter the height:\n");
  scanf("%f",&height);
  float area;
  find_area(base,height,&area);
  output(base,height,area);
  }
void find_area(float base , float height, float *area){
  *area=(base*height)/2;
}

void output(float base, float height, float area){
  printf("the area of the triangle is %f\n",base,height,area);
}
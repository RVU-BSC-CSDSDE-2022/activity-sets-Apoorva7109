#include<stdio.h>
#include<math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main(){
  float x1,x2,y1,y2;
  input(&x1,&y1,&x2,&y2);
  float distance=find_distance(x1,x2,y1,y2);
  output(x1,x2,y1,y2,distance);
  return 0;
}

void input(float *x1, float *y1, float *x2, float *y2){
  printf("enter x1:\n");
  scanf("%f",x1);
  printf("enter x2:\n");
  scanf("%f",x2);
  printf("enter y1:\n");
  scanf("%f",y1);
  printf("enter y2:\n");
  scanf("%f",y2);
}

float find_distance(float x1, float y1, float x2, float y2){
  float distance;
  distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  return distance;
}

void output(float x1, float y1, float x2, float y2, float distance)
  {
    printf("The distance between the given points is:%.4f",x1,y1,x2,y2,distance);
  }
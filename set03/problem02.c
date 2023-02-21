#include<stdio.h>
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main(){
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  int result=is_triangle(x1,y1,x2,y2,x3,y3);
  printf("%i\n",result);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter x1:\n");
  scanf("%f",x1);
  printf("enter y1:\n");
  scanf("%f",y1);
  printf("enter x2:\n");
  scanf("%f",x2);
  printf("enter y2:\n");
  scanf("%f",y2);
  printf("enter x3:\n");
  scanf("%f",x3);
  printf("enter y3:\n");
  scanf("%f",y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  // float area=0.5*(x1*(y2−y3)+x2*(y3−y1)+x3*(y1−y2));
  float area;
  area = 0.5 * (x1 * (y2-y3) + x2 * (y3-y1) + x3 * (y1-y2));
  printf("%f\n",area);
  if(area>0){
    return 1;
  }
  else{
    return 0;
  }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  printf("%i\n",result);
  if(result==1){
    printf("The points form a triangle");
  }
  else{
    printf("The points do not form a triangle");
  }
}

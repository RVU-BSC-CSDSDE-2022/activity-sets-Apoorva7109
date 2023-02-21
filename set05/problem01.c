#include<stdio.h>
#include<math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
  Point a,b;
  float res;
  a=input();
  b=input();
  dist(a,b,&res);
  output(a,b,res);
  return 0;
}

Point input(){
  Point digit;
  printf("enter the points:\n");
  scanf("%f %f",&digit.x,&digit.y);
  return digit;
}

void dist(Point a, Point b, float *res){
  *res=sqrt(pow((b.x - a.x),2) + pow((b.y - a.y),2));
}

void output(Point a,Point b,float res){
  printf("the distance between (%.2f,%.2f) and (%.2f,%.2f) is %f\n",a.x,a.y,b.x,b.y,res);
}
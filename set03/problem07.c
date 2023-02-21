// To find the length of a line

#include<stdio.h>
#include<math.h>

typedef struct point{
float x,y;
} Point;

typedef struct line{
Point p1,p2;
float distance;
}Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
  Line x;
  x=input_line();
  find_length(&x);
  output(x);
}

Point input_point()
{
  Point a;
  printf("Enter a point:");
  scanf("%f %f",&a.x,&a.y);
  return a;
}

Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;
}

void find_length(Line *l)
{
  float a,b;
  a=(l->p2.x - l->p1.x)*(l->p2.x - l->p1.x);
  b=(l->p2.y - l->p1.y)*(l->p2.y - l->p1.y);

  l->distance=pow((l->p2.x - l->p1.x),2) + pow((l->p2.y - l->p1.y),2);
  l->distance=sqrt(a+b);
}

void output(Line l)
{
  printf("The distance between the points (%.2f,%.2f) and (%.2f,%.2f) is %.2f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
#include <stdio.h>

struct triangle
{
float base;
float height;
float area;
};
typedef struct triangle Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main()
{
  Triangle t;
  t=input_triangle();
   find_area(&t);
   output(t);
   return 0;
}

Triangle input_triangle()
{
  Triangle t;
  printf("enter the base\n");
  scanf("%f", &t.base);
  printf("enter the height\n");
  scanf("%f", &t.height);
  return t;
}
void find_area(Triangle *t)
{
       t->area=(t->base)*(t->height)*(0.5);
}

void output(Triangle t)
{
  printf("the area of the triangle with base=%f and base=%f is %f",t.base,t.base,t.area);
}
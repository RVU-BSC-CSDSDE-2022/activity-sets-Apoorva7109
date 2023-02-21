#include<stdio.h>
#include<math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct side {
    Point p1,p2;
    float distance;
} Side;

typedef struct polygon {
    Side sides[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(int i);
void initialize_sides(int n, Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(int n, Polygon* p);
void output(Polygon p);

int main(void)
{
  int n;
  Polygon p;
  n = input_n();
  initialize_sides(n,&p);
  find_perimeter(n,&p);
  output(p);
}
int input_n()
{
  int z;
  printf("Enter the number of sides: ");
  scanf("%d", &z);
  return z;
}

Point input_point(int i)
{
  Point s;
  printf("Enter the coordinates of point %d (x,y): ",i);
  scanf("%f %f",&s.x,&s.y);
  return s;
}

void initialize_sides(int n, Polygon *p)
{
  for(int i = 1;i<=n;i++)
  {
    p->sides[i].p1 = input_point(i);
  }
}

float find_distance(Point a, Point b)
{
  float distance;
  distance = sqrt(pow((b.x - a.x),2) + pow((b.y - a.y),2));
  return distance;
}

void find_perimeter(int n, Polygon* p)
{
  for(int i=0;i<=n;i++)
    {p->sides[i].distance = find_distance(p->sides[i].p1,p->sides[i+1].p1);}

  for(int i=0;i<=n;i++)
    {p->perimeter = p->perimeter + p->sides[i].distance;}
}

void output(Polygon p)
{
  printf("\nThe perimeter of the polygon is %f\n",p.perimeter);
}
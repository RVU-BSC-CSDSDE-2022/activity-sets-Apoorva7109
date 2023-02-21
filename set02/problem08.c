#include<stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main(){
  int n;
  n=input_n();
  Triangle smallest;
  Triangle t[n];
  input_n_triangles(n,t);
  find_n_areas(n,t);
  smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}

int input_n(){
  int digit;
  printf("enter the number of triangles");
  scanf("%d",&digit);
  return digit;
}

Triangle input_triangle(){
  Triangle t;
  printf("enter the base:");
  scanf("%f",&t.base);
  printf("enter the altitude:");
  scanf("%f",&t.altitude);
  return t;
}

void input_n_triangles(int n, Triangle t[n]){
  for(int i=0;i<n;i++){
    t[i]=input_triangle();
  }
}

void find_area(Triangle *t){
  t->area=0.5*t->base*t->altitude;
}

void find_n_areas(int n,Triangle t[n]){
  for(int i=0;i<n;i++){
    find_area(&t[i]);
  }
}

Triangle find_smallest_triangle(int n, Triangle t[n]){
  Triangle smallest=t[0];
  for(int i=1;i<n;i++){
    if(t[i].area<smallest.area){
      smallest=t[i];
    }
    return smallest;
  }
}

void output(int n,Triangle t[n],Triangle smallest){
  printf("the smallest triangle is %f %f %f",smallest.base,smallest.altitude,smallest.area);
}
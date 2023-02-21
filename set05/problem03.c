//To find the weight of the camel given height,length and stomach radius using four functions

#include<stdio.h>
#include<math.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
// float find_weight(Camel c);  //pass by value
//or
void find_weight(Camel *c); //passing address variable
void output(Camel c);

int main()
{
  Camel c;
  c=input();
  find_weight(&c);
  output(c);
  return 0;
}

Camel input()
{
  Camel attri;
  printf("enter stomach radius of the camel:\n");
  scanf("%f",&attri.radius);
  printf("enter the length of the camel:\n");
  scanf("%f",&attri.length);
  printf("enter the height of the camel:\n");
  scanf("%f",&attri.height);
  return attri;
}

void find_weight(Camel *c){
  float product,pi;
  product=sqrt(c->height * c->length);
  pi=22.0/7.0;
  c->weight=pi * (c->radius * c->radius * c->radius) * product;
}

void output(Camel c) {
  printf("The weight of the camel with radius: %.1f, height: %.1f and length: %.1f is %f \n", c.radius, c.height, c.length, c.weight);
}
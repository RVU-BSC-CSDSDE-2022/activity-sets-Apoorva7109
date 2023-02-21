//To find the weight of a camel,given height,length and stomach radius

#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main(){
  float radius,height,length,weight;
  input_camel_details(&radius,&height,&length);
  weight=find_weight(radius,height,length);
  output(radius,height,length,weight);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
  printf("enter the stomach radius of the camel:\n");
  scanf("%f",radius);
  printf("enter the height of the camel:\n");
  scanf("%f",height);
  printf("enter the length of the camel:\n");
  scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
  float wgt,product,pi;
  product=sqrt(height*length);
  pi=22.0/7.0;
  wgt=pi*(radius*radius*radius) *product;
  return wgt;
}

void output(float radius, float height, float length, float weight)
{
  printf("The weight of the camel with radius:%.1f,height:%.1f and length:%.1f is %f\n",radius,height,length,weight);
}
//To find the mood of the camel

#include<stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main(){
  float radius,height,length;
  int mood;
  input_camel_details(&radius,&height,&length);
  mood=find_mood(radius,height,length);
  output(radius,height,length,mood);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length) {
  printf("Enter stomach radius of the camel: ");
  scanf("%f",radius); 
  printf("Enter height of the camel: ");
  scanf("%f",height);
  printf("Enter length of the camel: ");
  scanf("%f",length);
}

int find_mood(float radius, float height, float length){
  int result;
  if(radius<height && radius<length){
    result=0;
  }
  else if(height<length){
    result=1;
  }
  else{
    result=-1;
  }
  return result;
}

void output(float radius, float height, float length, int mood) {
  if(mood==0) {
    printf("The Camel is Sick \n");
  }
  else if(mood==1) {
    printf("The Camel is Happy \n");
  }
  else {
    printf("The Camel is Tense \n");
  }
}
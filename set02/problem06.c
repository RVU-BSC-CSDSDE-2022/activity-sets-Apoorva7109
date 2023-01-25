#include<stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main(){
  char string[100],rev_string[100];
  input_string(string);
  str_reverse(string,rev_string);
  output(string,rev_string);
  return 0;
}

void input_string(char *a){
  printf("Enter the string:");
  scanf("%s",a);
}

void str_reverse(char *str,char *rev_str){
  int i,length,k;
  i=0;
  k=0;
  length=0;
  while(1){
    if(str[i+1]=='\0'){
      length=i;
      break;
    }
    i++;
  }
  for(i=length;i>=0;i--){
    rev_str[k]=str[i];
    k++;
  }
}

void output(char *a,char *reverse_a){
  printf("Normal string:%s\n",a);
  printf("Reversed string:%s\n",reverse_a);
}
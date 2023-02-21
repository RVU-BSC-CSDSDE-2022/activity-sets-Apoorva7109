#include<stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main(){
  char name[100];
  int res;
  input(name);
  res=has_nice_name(name);
  output(res);
  return 0;
}

void input(char *name){
  printf("enter the name of the camel:\n");
  scanf("%s",name);
}

int has_nice_name(char *c){
  int result,i,count_v,count_c;
  i=0;
  count_v=0;
  count_c=0;
  while(1){
    if(c[i]=='\0'){
      break;
    }
    if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u'){
      count_v=count_v+1;
    }
    else{
      count_c=count_c+1;
    }
    if(count_c>=2 && count_v>=2){
      result=1;
    }
    else{
      result=0;
    }
    i++;
  }
  return result;
}

void output(int res) {
  if(res==0) {
    printf("The camel does not have a nice name \n");
  }
  else {
    printf("The camel does have a nice name \n");
  }
}
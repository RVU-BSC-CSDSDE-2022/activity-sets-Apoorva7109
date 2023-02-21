#include<stdio.h>
#include<string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main(){
  char a[100];
  int no_words;
  input_string(a);
  no_words=count_words(a);
  output(a,no_words);
  return 0;
}

void input_string(char a[100]) {
  printf("Enter a string of words: ");
  scanf("%[^\n]s", a);
}

int count_words(char *string) {
  int count=0;
  char copystr[100];
  strcpy(copystr,string);
  char constant[]=" ";
  char *token=strtok(copystr,constant);
  while( token != NULL ) {
      count++;
      token = strtok(NULL, constant);
   }
  return count;
}

void output(char *string, int no_words) {
    printf("The number of words in '%s' is %d \n",string,no_words);
}
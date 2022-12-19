#include <stdio.h>

void input_two_strings(char *string1, char*string2);
int stringcompare(char *string1, char*string2);
void output(char *string1, char*string2,result);

int main(){
  char string1[100], char string2[100];
  int result=0;
  input_two_strings(string1, string2);
  result=string compare(string1, string2);
    output(string1, string2, result);
      return 0;
}
  }
void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string\n");
  scanf("%s", string1);
  printf("Enter the second string\n");
  scanf("%s", string2);
}

int stringcompare(char *string1, char *string2)
{
    int result=0,i=0,flag=0;
    while(string1[i]!='\0' && string2[i]='\0')
      {
          if(string1[i]!=string2[i])
          {
            flag=1;
            break;
          }
      }

  if(flag==0)
  {
     if(string1[i]=='\0' && string2[i]=='\0')
       return 0;
    if(string1[i]=='\0')
      return 1;
    if(string2[i]=='\0')
      return 2;
  }

  if(flag==1)
  {
    if(string1[i]>string2[i])
      return 1;
    else return 2;
  }
}

void output(char *string1, char *string2, int result)
{
   if(result==0)
     printf("Strings are equal\n");
   if(result==1)
     printf("%s is greater\n", string1);
  if(result==2)
    printf("%s is greater\n", string2);
}  
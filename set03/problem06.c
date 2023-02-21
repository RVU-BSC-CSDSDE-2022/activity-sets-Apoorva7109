#include<stdio.h>
#include<string.h>

void input_string(char *a,char *b);
int sub_str_index(char * string,char *substring);
void output(char *string,char *substring,int index);

int main()
{
  char a[100];
  char b[50];
  int index;
  input_string(a,b);
  index=sub_str_index(a,b);
  output(a,b,index);
}

void input_string(char *a,char *b)
{
  printf("enter string:");
  scanf("%s",a);

  printf("enter substring:");
  scanf("%s",b);
}

int sub_str_index(char *string,char *substring)
{
  int index,i,p;
  for(i=0;string[i]!='\0';i++)
    {
      index=0;
      for(p=0;substring[p]!='\0';p++)
        {
          if(string[i]==substring[p])
          {
            index = i;
            return index;
          }
          else{
            break;
          }
        }
      }
}

void output(char *string,char *substring,int index)
{
  printf("The index of substring %s in string %s is %d",string,substring,index);
}
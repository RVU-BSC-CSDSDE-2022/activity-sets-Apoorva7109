#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main() {
  int n,index;
  n=input_size();
  int a[n];
  input_array(n,a);
  index=find_largest_index(n,a);
  output(index);
  return 0;
}

int input_size() {
  int size;
  printf("Enter the size: ");
  scanf("%d",&size);
  return size;
}

void input_array(int n, int a[n]) {
  int i;
  for(i=0;i<n;i++) {
    printf("Enter a number: ");
    scanf("%d",&a[i]);
  }
}

int find_largest_index(int n, int a[n]) {
  int largest,i,l_index;
  largest=0;
  for(i=0;i<n;i++) {
    if(a[i]>largest) {
      largest = a[i];
      l_index=i;
    }
  }
  return l_index;
}

void output(int index) {
  printf("The index of the largest number in the array is %d \n",index);
}
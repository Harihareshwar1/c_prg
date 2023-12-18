#include "stdio.h"
#include
int main(){
  int n;
  puts("enter number of elements :");
  scanf("%d",&n);
  int *ptr = (int*)calloc(n,sizeof(int));
  if (ptr!=NULL){
    printf("memory created successfully\n");
  for(int i = 0;i<n;i++){
    printf("%d ",ptr[i]);

  }
  }
  else{
    printf("Memory not allocated");
  }



}
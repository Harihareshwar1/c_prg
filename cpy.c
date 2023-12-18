#include "stdio.h"
#include "string.h"
int main(){
   char* p1;
   char* p2;
   puts("enter 1 str");
   gets(p1);
   puts("enter 2 str");
   gets(p2);
   if(!strcmp(p1,p2)){
    printf("equal");
   }
   else{
    printf("NOt equal");
   }
}
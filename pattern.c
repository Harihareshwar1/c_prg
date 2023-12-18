#include "stdio.h"
int main(){
     int spaces = 3;
    for(int i=1;i<=4;i++){
        int chr = 65;
        int num_of_chr = 2*i -1;
        for (int j=0;j<spaces;j++){
            printf(" ");
        }
        for(int k=0;k<num_of_chr;k++){
            printf("%c",chr);
            chr++;
        }
         for (int j=0;j<spaces;j++){
            printf(" ");
        }
      printf("\n");
      spaces--;
    }





}
#include "stdio.h"
void TOH(int ,char,char,char);
int main(){
    int n;
    scanf("%d",&n);
    TOH(n,'x','y','z');
}
void TOH(int n,char x,char y,char z){

    if(n ==1){
        printf("\nMove the top disc from %c to %c",x,z);
    }
    else{
        TOH(n-1,x,z,y);
        printf("\nMove the top disc from %c to %c",x,z);
        TOH(n-1,y,x,z);
    }
}
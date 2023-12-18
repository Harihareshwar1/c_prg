#include<stdio.h>
int main()
{
    int a,b,c;
    b=0;
    printf("Enter a number\n");
    scanf("d",&a);
    for(b<a){
        if(b%2==0){
            c+=b;
            b++;
        }
        else{
            b++;
        }
        printf("%d",c);
    }
}
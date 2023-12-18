#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter any Natural number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        sum+=i;
    }
    printf("sum of odd number 0 to %d is %d",n,sum);
    return 0;
}
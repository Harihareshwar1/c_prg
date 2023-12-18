#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter any Natural number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            `sum+=i;
    }
    printf("sum of natural number 0 to %d is %d",n,sum);
    return 0;
}
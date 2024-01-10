#include<stdio.h>

int main(){
    int sum=0,n=1000;
    printf("Enter the number:");
     scanf("%d",&n);


    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;

}

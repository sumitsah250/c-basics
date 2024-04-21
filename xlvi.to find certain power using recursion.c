#include<stdio.h>
int power(int,int);
int main(){
    int n,x,s;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the power:");
    scanf("%d",&x);
    s=power(n,x);
    

    printf("%d to power %d is:%d",n,x,s);
}

int power(int n, int x){
    return(n*power(n,(x-1)));
}
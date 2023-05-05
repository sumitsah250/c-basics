// sum of series 1 11 111 1111 11111 ......n;

#include<stdio.h>
int sum(int );
int main(){
    int n;
    printf("enter the numer of term:");
    
    scanf("%d",&n);
    sum(n);

    return 0;
}
int sum(int n){
    int s=0,k=0;
    for(int i=1;i<=n;i++){
        s=s*10+1;
        k=k+s;
    }
    printf("\nthe sum up to %d term is %d",n,k);
    }
// logic is to divide the given number from 2 to that number until the remainder is zero and check whether the number where the remainder is zero is itself or not if its itself then print its a prime number
N
#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("enter the range:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
                
            }}
            if(i==j){
                printf("\n%d",i);
            }
        }
    
}
// logic is to divide the given number from 2 to just less than that number and see if remainder appers 0 or not if no remainder is zero then its a prime nmber
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
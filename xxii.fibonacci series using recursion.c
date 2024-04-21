#include<stdio.h>
int fibo(int,int,int);
int main(){

int a=1,b=1;
int n;
printf("enter the term up to which you want to print the series:");
scanf("%d",&n);
printf("%d %d",a,b);
fibo(a,b,n);



 }
 int fibo(int a, int b, int n){
    int c;
    if(n<=0)
    return;
    else{
        c=a+b;
        printf(" %d ",c);
        fibo(b,c,n-1);
        
    }
 }
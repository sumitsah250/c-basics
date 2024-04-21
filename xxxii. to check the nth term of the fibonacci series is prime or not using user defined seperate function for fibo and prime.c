// logic for nth term of fibonacci series is to sum previous two term
// their will be two base case n==1 =0 and n==2 =1
// and retur condidion will be previous two term hint return n-1 and n-2 in recursion analogy
#include <stdio.h>
int prime(int);
int fibo(int);
int main()
{
    int n,s,p;
    printf("enter the term which you want to check:");
    scanf("%d",&n);
    s=fibo(n);
    
    printf("the term is:%d",s);
    p=prime(s);
    if(p==1){
        printf("the number is prime number\n");
    }
    else 
    printf("the number is not prime number");
    return 0;
}
int fibo(int n){
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return(fibo(n-1)+fibo(n-2));
}

int prime(int f){
    int i;
    for( i=2;i<=f;i++){
       if(f%i==0){
        break;
       }
    }
    if(i==f){
        return 1;

    }
    else 
    return 0;
}
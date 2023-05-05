// series is 1^2-2^2+3^2......nth term

#include<stdio.h>
int series(int);
int main(){
    int n;
    printf("the term up to which this will print the term");
    scanf("%d",&n);
    printf("the sum of series is:%d",series(n));
return 0; 
}
int series(int n){
    if(n<=0)
    return 0;
    else
    {
        if(n%2==0)
            return(-n*n+series(n-1));
            else
            return(n*n + series(n-1));
        
    }
}
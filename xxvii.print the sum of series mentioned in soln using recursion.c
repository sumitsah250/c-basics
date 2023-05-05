// sum of series 1 11 111 1111 11111 ........nth term
#include<stdio.h>
int term(int);
int main(){
    int n,s=0;
    int t;
    printf("enter the term n:");
    scanf("%d",&n);
     for(int i=1;i<=n;i++){
      
        t=term(i);
           printf("%d +",t);
       
        s=s+t;

     }
     printf("==the sum  is:%d",s);

    return 0;

}
int term(int n){
    if(n==1)
    return 1;
    else 
    return(term(n-1)*10+1);

}
#include<stdio.h>
int text(int);
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    text(n);
    return 0;
}
int text(int n){
    
    if(n==0)
    return 0;
    else{
    printf("i love programming ");

    return(text(n-1));
    
    }


}
#include<stdio.h>
 int sum(int);
int main(){
    int n,s;
    printf("enter the number:");
    scanf("%d",&n);
    s=sum(n);
    printf("the sum is:%d",s);
    return 0;
}
int sum(int n){
    if(n==0)
    return 0;
    else
    return (sum(n/10)+n%10);

}
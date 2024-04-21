// any number if its reverse is same as it then its palindrome just reverse a number and compare it with original to find if it's same or not if its same then it't palindrome else it's not


#include<stdio.h>
int main(){
    int n,x=0,rem,y;
    printf("enter the number :");
    scanf("%d",&n);
    y=n;
    while(n!=0){
        rem=n%10;
        x=x*10+rem;
        n=n/10;


    }
    printf("the revers is:%d\n",x);
    if(x==y)
    printf("the number is palindrome");
    else
    printf("ther number is not plalindrome");
    return 0;
}
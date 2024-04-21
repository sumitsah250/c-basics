/*golbal declaration of function and variables*/
#include<stdio.h>
void sumit();
int a=1,b=3;
int main(){
    printf("sum of the function is:%d\n",a+b);
    sumit();

    return 0;
}
void sumit(){
    int m;
    printf("enter the number:");
    scanf("%d",&m);
    printf("sub of the number is:%d",a-b);
    printf("the provided number is %d",m);
    
}
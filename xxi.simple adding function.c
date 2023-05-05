#include<stdio.h>
int sum(int,int); //finction deceleration
int main(){
    int a,b,s;
    printf("enter the number to be added");
    scanf("%d%d",&a,&b);
    s=sum(a,b);//funciton call 
    printf("the sum is %d",s);


    return 0;
}
int sum(int x,int y){             // function defination
    int z;
    z=x+y;
    return z;
}
// the logic behind this is  we have to pre assume two values to start with and then add this value to third variable tip use swap the variables for series to continue on


#include<stdio.h>
int main(){
    int a=0,b=1,c; //pre defined variable
    int n;

    printf("enter the number upto which you want print the series:");
    scanf("%d",&n);
        printf("%d %d ",a,b);
    do{
        c=a+b; //the needed variable
        if(c<n)
        printf("%d ",c);
        a=b;   //swaping the variables
        b=c;
        
    }while(c<n);
    return 0;
}
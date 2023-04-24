// the basic concept of leap year is that it should be divided with 4 but not with 100
// but the year which is divides with 400 is also consider as leap year dispite its divides with 100 




#include<stdio.h>
int main(){
    int n;
    printf("enter the year:");
    scanf("%d",&n);
    if(n%4==0 && n%100!=0){
        printf("this is leap year");

    }
    else if(n%400==0){
        printf("this is leap year");

    }
    else 
    printf("it's not a leap year");
    return 0;
}
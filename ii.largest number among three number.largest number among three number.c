#include<stdio.h>
int main() {
    int a,b,c;
    int max;
    printf("enter a number :");
    
   
    scanf("%d",&a);
    printf("enter a number :");
    scanf("%d",&b);
     printf("enter a number :");
    scanf("%d",&c);
    
    max= (a>b && a>c)?a:((b>a && b>c)?b:c);
    printf("the maximum number is %d",max);
    return 0;

}
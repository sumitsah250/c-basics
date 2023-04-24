// the concept is to take the remainder after dividing with 10 and add up do this until the number becomes zero

#include<stdio.h>
int main(){
    int n,rem,sum=0 ,c=0; //tip always do the variable decleration between the code
    printf("enter the number:");
    scanf("%d",&n);
    do
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        c++;
    } while (n!=0);
    printf("the sum is:%d",sum);
    printf("the number of digit is:%d",c);

    

    return 0;
}
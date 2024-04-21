#include<stdio.h>
// hint to solve this is to take small term and find remainder of it until you get zero for both the terms

#include<string.h>
#include<conio.h>
int main(){
        int i,min,h,a,b;
        printf("enter a and enterb");
        scanf("%d%d",&a,&b);
        min=(a<b)?a:b;
        for (i=min;i>=1;i--){
                if(a%i==0 && b%i==0){
                        h=i;
                        break;
        
                }
        }
        printf("the hcf is:%d",h);

         
 
        return 0;
}
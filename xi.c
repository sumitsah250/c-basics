//write an intractive program than readds positive number until the user enters"no" and then dum thr number divisible by 4 and that lie between the range 10 to 50 and finally display the count and the average value
#include<stdio.h>
#include<string.h>
int main(){
    int s=0,c=0;
    float avg;
    int n;
    char ch[10];
    do 
    {
        printf("enter the nuber:");
        scanf("%d",&n);
        if(n>10 && n<50 && n%4==0){
            s=s+n;
            c++;

        }
        printf("do you want to continue:yes/no?");
        scanf("%s",&ch);
        
    }while(strcmp(ch,"no")!=0);
    if(c!=0)
    avg=s/c;
    printf("the count is:%d\n",c);
    printf("the average is:%f",avg);  
    return 0;
}
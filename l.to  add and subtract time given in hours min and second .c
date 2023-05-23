#include<stdio.h>
#include<conio.h>
struct time {
    int hour;
    int min;
    int second;
};
int main(){
    struct time t1,t2,result;
     int a;
     int x;
     printf("enter the 1st time :");
     printf("\nenter hour:");
     scanf("%d",&t1.hour);
     printf("enter min:");
     scanf("%d",&t1.min);
     printf("enter second:");
     scanf("%d",&t1.second);

     printf("\n enter the second time:");
       printf("\nenter hour:");
     scanf("%d",&t2.hour);
     printf("enter min:");
     scanf("%d",&t2.min);
     printf("enter second:");
     scanf("%d",&t2.second);
     printf("enter a if you want to add press 1 and 2 if you want to subtract:");
     scanf("%d",&a);
     switch(a){
        case 1:
        x=0;
        x=t1.hour*3600+t1.min*60+t1.second+t2.hour*3600+t2.min*60+t2.second;
        result.hour=x/3600;
       result.min=(x%3600)/60;
        result.second=(x%3600)%60;
        printf("%d hour %d min %d second",result.hour,result.min,result.second);
        break;
        case 2:
        x=0;
        x=t1.hour*3600+t1.min*60+t1.second-(t2.hour*3600+t2.min*60+t2.second);
        result.hour=x/3600;
        result.min=(x%3600)/60;
        result.second=(x%3600)%60;
        printf("%d hour %d min %d second",result.hour,result.min,result.second);
        break;
        default:
        printf("\nthis operation is not valid.");
        break;
     }
    return 0;
}
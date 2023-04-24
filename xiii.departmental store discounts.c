//disounts in store not necessary to ptatice this


#include<stdio.h>
int main(){
    int sm,hm,t,n;
    printf("enter the purchese amount of the summer cloth:\n");
    scanf("%d",&sm);
    printf("enter the purches amount of the handloom items:\n");
    scanf("%d",&hm);
    t=sm+hm;
    if(t>0 && t<500)
    n=1;
    if(t>500 && t<1000)
    n=2;
    if(t>1000)
    n=3;
    switch(n){
        case 1:
        t=t-0.03*hm;
        break;
        case 2:
        t=t-0.04*sm-0.05*hm;
        break;
        case 3:
        t=t-0.1*sm-0.1*hm;
        break;
        default:
        
        break;
        
    }
    printf("the net amount after discount is:%d",t);






    return 0;
}
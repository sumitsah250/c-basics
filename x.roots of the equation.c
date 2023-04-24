// to find the roots first we have to check whether the roots are imagenary of real or equal then gently apply the switch for every cases:
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2,d,im,re;
    int n;
    printf("enter the roots a,b,c");
    scanf("%f%f%f",&a,&b,&c);
     d=b*b-4*a*c;
    if(d==0){
        n=1;
    }
    if(d>0){
        n=2;
    }
    if(d<0){
        n=3;
    }
   
     switch(n){
        case 1 :
        printf("it has real and equal roots");
        x1=x2=-b/(2*a);
        printf("the roots are:%f and %f",x1,x2);
        break;
        case 2 :
        printf("the roots are real and unequal");
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        printf("the roots are:%f and %f");
        break;
        case 3:
        d=-d;
        printf("the roots are imagenary and unequal");
        im=sqrt(d)/2*a;
        re=-b/2*a;
        printf("the imagenary roots are");
        printf("\n%f + %fi",re,im);
        printf("\n%f - %fi",re,im);
        break;

     }

    
}
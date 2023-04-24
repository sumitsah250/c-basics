//print the value fo e^x=1+x+x^2/2!.......x^n/n!
//tip divide the term into numerator and denomarator

#include<stdio.h>
#include<math.h>
int manin(){
    int x,n;
    int num,den;
    float s=0;
    printf("enter the value ofx and n");
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++){
        num=pow(x,i);
        den=1;
        for(int j =1;j<i;j++){
             den=den* j;
        }
        s=s+num/den;
       
    }
    printf("the e^%d upto %d terms is:%f",x,n,s);

}
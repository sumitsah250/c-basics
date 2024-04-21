#include<stdio.h>
#include<math.h>

int main(){
    double x,y,z;
    float PI=3.1415;
    printf("enter the valve in degree:");
    scanf("%lf",&x);
    z=x*PI/180;
  y=sin(z);
  printf("the value of sin%lf is %lf",x,y);N

    return 0;

}
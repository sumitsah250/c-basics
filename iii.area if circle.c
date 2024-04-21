/* program to find area of a circle*/
#include<stdio.h>
#define PI 3.1415
# define area(x) PI*x*x
int main(){
    int r;
    float area;
printf("enter a radius:");
scanf("%d",&r);
area=PI*r*r;
printf("the area is :%f",area);
printf("the area due to  macro formula is:%f",area(4));
return 0;

}
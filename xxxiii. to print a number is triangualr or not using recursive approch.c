// here to solve this use reverse approch 
// sub 1 ,2 ,3,4...until term becomes negative


#include<stdio.h>
int trangular(int);
int main(){
    int n,r;
    printf("enter the number :");
    scanf("%d",&n);
    r=trangular(n);
    if(r==1)
    printf("the number is triangular");
    else
    printf("the number is not triangular");
    return 0;
}
int trangular(int n)
{
    static int i=0;//static declaration to retain the latest value
   
    if(n==0)
        return 1;
        else if(n<0){
            return 0;
        }
        else
        i++;
        return trangular(n-i);


}
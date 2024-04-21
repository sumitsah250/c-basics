#include<stdio.h>
int hcf(int, int);
int lcm(int,int);
int main(){
    int n1,n2;
    printf("enter the numbers:");
    scanf("%d%d",&n1,&n2);
    printf("the hcf of the numebr is :%d\n",hcf(n1,n2));
    printf("the lcm of the number is :%d\n",lcm(n1,n2));

    return 0;
}
int hcf(int a,int b){
    for(int i=a;i>=1;i--){
        if(a%i==0 && b%i==0)
        return i;
    }
 }
int lcm(int a,int b){
    int x,y;
    x=hcf(a,b);
    y=x*(a/x)*(b/x);
    return y;
}
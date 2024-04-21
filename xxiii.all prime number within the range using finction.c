//similar as before just inserted function

#include<stdio.h>
int prime(int, int);
int main(){
    int n1,n2;
    printf("enter the range:");
    scanf("%d%d",&n1,&n2);
    prime(n1,n2);

    return 0;
}
int prime(int a,int b){
    int i,j;
    for(i=a;i<=b;i++){
        for (j=2;j<=i;j++){
            if(i%j==0)
            break;
        }
        if(i==j)
        printf(" %d ",i);
    }
}
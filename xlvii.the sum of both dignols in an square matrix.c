#include<stdio.h>
int main(){
    int n,a[20][20];
    int s=0,d=0;
    printf("enter the row/coulmn of the matrix:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter the %d %d element:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        s=s+a[i][i];
    }
    printf("the sum of main dignol is:%d\n",s);
     for(int i=0;i<n;i++){
        d=d+a[i][n-i-1];
    }
    printf("the sum of sub dignols is:%d",d);
}
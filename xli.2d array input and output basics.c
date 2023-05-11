#include<stdio.h>
int main(){
    int a[20][10];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);

        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",a[i][j]);
            
        }
        printf("\n");
    }
}
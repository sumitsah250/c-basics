#include<stdio.h>
int main(){
    int a[29];
    for(int i=1;i<=10;i++){
        scanf("%d",&a[i]);
    }
     for(int i=1;i<=10;i++){
        for(int k=1;k<=10-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",a[i]);

        }
        for(int l=2;l<=i;l++){
            printf("%d",a[i]);
        }
        printf("\n");
        
    }
}

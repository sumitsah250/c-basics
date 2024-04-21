#include<stdio.h>
int main(){
    int k=0;
    int a[3][3],b[3][3],c[3][3];
    printf("enter the first matrix:\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
     printf("enter the second  matrix:\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            
            
            for(int z=0;z<3;z++){
               
                
                 k=k+a[i][z]*b[z][i];

            }
            c[i][j]=k;
             k=0;  
        }
        
    }
    printf("\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",c[i][j]);
}
printf("\n");
    }
}
// the pattern is
            //  *
            // ***
        //    *****
        //   *******
// to solver this divide this into two sub patterns




#include<stdio.h>
int main(){
    for(int i=0;i<10;i++){
        for(int z=0;z<=10-i;z++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");

        
    }
    for(int l=0;l<i;l++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}

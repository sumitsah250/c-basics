// print the given pattern
//     1
//    232
//   34543
//  4567654
// 567898765
#include<stdio.h>
int main(){
    int i,j,k,l;
    for(i=5;i>=1;i--){
        for(j=1;j<=5-i;j++){
            printf(" ");

        }
        for(k=i;k<=2*i-1;k++){
            printf("%d",k);

        }
        for(l=2*i-2;l>=i;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}
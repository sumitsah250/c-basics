// to print the pattern given below tip just hit and try the concept {particularly for this divide into four part for that just rememberr 2i-1}
//     1
//    232
//   34543
//  4567654
// 567898765

#include<stdio.h>
int main(){
    int i,j,z,x;
    for(i=1;i<=5;i++){
         for(j=1;j<=5-i;j++){
            printf(" ");

         }
         for(z=i;z<=2*i-1;z++){
            printf("%d",z);
         }
         for(x=2*i-2;x>=i;x--){
            printf("%d",x);
         }
         printf("\n");

    }
    return 0;
}
#include<stdio.h>
int main(){
    int n1,n2,c=0;
    printf("enter the range:");
    scanf("%d%d",&n1,&n2);
    printf("the even number between the range is:");
    for(int i=n1;i<=n2;i++){
        if(i%2==0){
            printf("%d ",i);
            c++;
        }
        
    }
    printf("\nthe frequency is :%d",c);
return  0;
}
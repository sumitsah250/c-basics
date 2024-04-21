#include<stdio.h>
int prime(int *, int);

int main(){
    int n;
    int a[20];
    printf("the number of term you want to enter:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the %d number:",i);
        scanf("%d",&a[i]);
    }
    printf("their are %d prime numbers in given data",prime(a,n));
}
int prime(int *x,int n){
    int l=0,i,j;
    for(i=0;i<n;i++){
        for(j=2;j<*(x+i);j++){
         if(*(x+i)/j==0){
            break;
         }
         }
       
         if(*(x+i)==j){
            
            l++;
         }
        
        }
   
      
        return l;
    }



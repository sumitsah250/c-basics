#include<stdio.h>
int arrange(int[],int);
int main(){
    int n,a[40];
    printf("enter the number of number you want to enter:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the number:\n");
        scanf("%d",&a[i]);
    } 
    arrange(a,n);
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
        
    } 
    printf("\nthe second largest number is:%d",a[1]);
    printf("\nthe third lowest number is:%d",a[n-3]);
    


}
int arrange(int a[40],int n){
    int temp;
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++){
        if(a[j]>a[i]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;

        }
       }
        }
    }

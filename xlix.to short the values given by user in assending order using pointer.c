#include<stdio.h> 
int sort(int *,int);
int main(){
    int n;
    int a[20];
    printf("the number of terms you wnat to enter:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int sort(int *x,int n)
{
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(x+j)<*(x+i)){
                temp=*(x+j);
                *(x+j)=*(x+i);
                *(x+i)=temp;

            }
        }
    }
}





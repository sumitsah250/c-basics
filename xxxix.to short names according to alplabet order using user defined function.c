#include<stdio.h>
#include<conio.h>
#include<string.h>
void sort (char[][20],int);
int main(){
    char a[20][20];
    int n,i;
    printf("enter the number of names you want to enter:");
    scanf("%d",&n);
    for( i=0;i<n;i++){
        scanf("%s",&a[i][20]);
    }
    sort(a,n);
    printf("the name after shorting is:\n");
    for(int j=0;j<n;j++)
    {
        printf("%s\n",a[j]);
    }
    
    return 0;
}
void sort (char a[][20],int n){
    int k;
    char l[20];
    for(int i=0;i<=n;i++){
        k=strcmp(a[i],a[i+1]);
        if(k>0){
            strcpy(l,a[i]);
            strcpy(a[i],a[i+1]);
            strcpy(a[i+1],l);
            


        }
    }
}
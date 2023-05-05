// armstrong examples
// 1 , 153, 8208, 
// recurion concept    sum(n)={ n==0 return 0 and sum(n/10)+n%10 up to the nth term:}


#include<stdio.h>
int sum(int,int);
int main(){
    int n,x,l=0,p;
    printf("enter the number:");
    scanf("%d",&n);
    x=n;
    
    while(x!=0){
        l=l+1;
        x=x/10;

    }
    

    p=sum(n,l);
    if(p==n)
    printf("the number is armstrong");
    else
    printf("the number is not armstrong");
    return 0;
}
int sum(int n,int l){
 
    int y,k=1;
    if(n==0)
    return 0;
    else{
        for(y=1;y<=l;y++){
            k=k*(n%10);

        }
       
        return (sum((n/10),l)+k);
        
    }

}
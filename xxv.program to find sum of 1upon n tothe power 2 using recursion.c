#include<stdio.h>
#include<conio.h>
float series(int);
 void main(){
    int n;
    float s;
    printf("enter the number up to which you want to print the number:");
    scanf("%d",&n);
    s=series(n);
    printf("the sum is:%f",s);
    
getch();
}
float series( int n){
    if(n==0)
      return 0;
       else 
        return(1.0/(n*n)+series(n-1)); ///can't understand why the 1 doesn't work here but 1.0 worked

    
}
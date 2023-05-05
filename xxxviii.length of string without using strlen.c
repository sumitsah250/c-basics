#include<stdio.h>
#include<conio.h>
int main(){
    char a[50];
    gets(a);
    int j=0;
    int l=0;
    for(int i=0;a[i]!='\0';i++){
        l++;
    }
printf("the length of string is:%d\n",l);
while(a[j]!='\0'){  //doing with while 
    j++;
}
printf("while doing with while:%d",j);
    return 0;
}
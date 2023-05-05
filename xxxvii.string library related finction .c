#include<stdio.h>
#include<string.h>
#include<conio.h>//if we use void like statement in our program
int main(){
    int d;
    char p[20],s[50]="sumit";
    printf("%s\n",s);//string data type
    
    printf("enter the name:");
    gets(p);
    printf("the name is:");
    puts(p); // from library
    printf("the length of name is:%d\n",strlen(p));
    
    strcat(s,p);  //if their is not enough space in s to fit p then the output will be unexpected so make sure to have
                  //   enough space
                   // strcat concatenates both of them and store the data in same location of 1st string.

    puts(s);
    puts(p);
    strcpy(s,p); //copies the  2nd string to 1st one
    puts(s);
    d=strcmp(s,p);
    if(d==0)
    printf("both string are equal");
    else if(d>0)
    printf("str1 lies after str2");
    else
    printf("str2 lies after str1");

    


}
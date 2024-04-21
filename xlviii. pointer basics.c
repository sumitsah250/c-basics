#include <stdio.h>
int main()
{
    int n = 20;
    int *p, *l;
    p = &n;
    printf("%d\n", p);
    printf("%d\n", *p);
    l = &p;
    printf("%d\n", l);
    printf("%d\n", *l);
    //  printf("%d",**l); //can't understand why not working
   
}
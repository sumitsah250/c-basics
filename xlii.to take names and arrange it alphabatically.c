#include <stdio.h>
#include <string.h>
#include <conio.h>
void arrange(char a[][20]);
int main()
{
    char a[10][20];
    for (int i = 0; i < 4; i++)
    {
        scanf("%s",&a[i]);
    }
    arrange(a);
    printf("the names in alphabatical order are:");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%s", a[i]);       
    }
    return 0;
}

void arrange(char a[10][20])
{
    int d;
    char temp[20];
    for (int i = 0; i < 4-1; i++)
    {
        for(int j=i+1;j<4;j++){

        
        d = strcmp(a[j], a[i]);
        if (d < 0)
        {
            strcpy(temp, a[j]);
            strcpy(a[j], a[i]);
            strcpy(a[i], temp);
        }
    }}
}
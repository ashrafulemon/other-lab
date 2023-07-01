
#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];//= "Coder Emon";
    int i,j,k=0,l;

    scanf("%[^\n]s",arr);

    l = strlen(arr);

    for(i=0;i<l;i++)
        printf("%c",arr[i]);

    printf("\n len = %d",l);

    return 0;
}




#include<stdio.h>
#include<string.h>

int main()
{
    char arr1[100];
    char arr2[100];
    char arr3[100];

    int i,j,k=0,l;

    scanf("%[^\n]%*c",arr1);
    scanf("%[^\n]%*c",arr2);
    scanf("%[^\n]%*c",arr3);
    /*gets(arr1);
    gets(arr2);
    gets(arr3);*/

    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%s\n",arr3);

    l = strlen(arr1);
    printf("\n len = %d\n",l);

    strcat(arr1,arr2);
    printf(arr1);
    printf("\n");

    strcpy(arr2,arr3);
    printf(arr2);
    printf("\n");

    i= strcmp(arr1,arr2);
    printf("%d\n",i);

    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%s\n",arr3);

    return 0;
}


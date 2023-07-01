#include<stdio.h>
int main()
{
    int i,j,k;
    char arr[10][100];
    for(i=0;i<5;i++){
        //scanf("%[^\n]",&arr[i]);
        gets(arr[i]);
    }
    for(i=0;i<5;i++){
        printf("%s\n",arr[i]);
    }
    return 0;
}

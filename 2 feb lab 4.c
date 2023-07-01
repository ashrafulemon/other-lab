#include<stdio.h>
int main()
{
    int i,tem;
    int x[5]={2,5,8,9,10};
    printf("In order :");
    for(i=0;i<5;i++)
        printf("%d ",x[i]);

    printf("\nIn reverse order :");

    for(i=4;i>=0;i--)
        printf("%d ",x[i]);

    return 0;
}

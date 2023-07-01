
#include<stdio.h>
int main()
{
    int i,j,tem;
    int x[5]={2,5,8,9,10};
    //printf("In order :");
    j=4;
    for(i=0;i<4/2;i++){
        tem= x[i];
        x[i]= x[j];
        x[j]=tem;
        printf(" x[%d] = %d , x[%d]= %d \n",i,x[i],j,x[j]);
        j--;
    }
    for(i=0;i<5;i++)
        printf("%d ",x[i]);

    return 0;
}

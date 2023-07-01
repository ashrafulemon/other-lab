#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,n,sum=0;
    int arr[100];
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg= (float)sum/n;
    printf("avg = %f\n",avg);
    for(i=0;i<n;i++){
        if(arr[i]>avg)
            printf("%d ",arr[i]);
    }
    return 0;

}

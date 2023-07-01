

#include<stdio.h>
int main()
{
    int arr[10]={23,4,3,2,33,22};
    int k=0;
    while(1){
        if(arr[k]=='\0')
            break;
        k++;
    }
    printf("%d",k);

    return 0;
}

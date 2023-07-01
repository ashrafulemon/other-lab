
#include<stdio.h>
int main()
{
    int arr[10]={23,4,3,2,33,22};
    int i,j,k=0;
    for(i=0;;i++){
        if(arr[i]=='\0')
            break;
        k++;
    }
    printf("%d",k);

    return 0;
}

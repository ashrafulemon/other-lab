
#include<stdio.h>
int main()
{
    char arr[100]= "Coder Emon";
    int k=0;
    while(1){
        if(arr[k]=='\0')
            break;
        k++;
    }
    printf("%d",k);

    return 0;
}


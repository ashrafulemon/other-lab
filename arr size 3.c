#include<stdio.h>
int main()
{
    char arr[100]= "Coder Emon";
    int i,j,k=0;
    for(i=0;;i++){
        if(arr[i]=='\0')
            break;
        k++;
    }
    printf("%d",k);

    return 0;
}


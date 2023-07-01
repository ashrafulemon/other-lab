#include<stdio.h>
int main()
{
    char arr[100]= "Coder Emon";
    int i,j,k=0;

    for(i=0;arr[i]!='\0';i++){
    //for(i=0;arr[i];i++){
        k++;
    }
    printf("%d",k);

    return 0;
}

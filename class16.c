
#include<stdio.h>
int main()
{
    char arr[100];//= "Coder Emon";
    int i,j,k=0;

    ///gets(arr);
    scanf("%[^\n]s",arr);
    //arr[1]='\0';

    for(i=0;arr[i]!='\0';i++);//{
    //for(i=0;arr[i];i++){
     //   k++;
   // }
    printf("%d",i);

    return 0;
}

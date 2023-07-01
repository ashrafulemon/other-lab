


#include<stdio.h>
#include<string.h>

int main()
{
    char arr1[100]="rana bhai";
    char arr2[100]= "rashed bh";
    char arr3[100]="emon ow";

    int i,j,k=0,l;

   // scanf("%[^\n]s",arr1);
    //scanf("%[^\n]s",arr2);
   // scanf("%[^\n]s",arr3);

    l = strlen(arr1);/// length 1
    printf("len = %d\n",l);

    strcat(arr1,arr2); ///1,2 jog
    printf("%s\n",arr1);

    strcpy(arr2,arr3); ///3 ,2 a copy hobe
    printf("%s\n",arr3);


    i= strcmp(arr1,arr3);/// 3,1 compare
    printf("%d\n",i);

    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%s\n",arr3);

    return 0;
}

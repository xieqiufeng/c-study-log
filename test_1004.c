#include<stdio.h>
int main()
{
    int arr[10]={11,12,13,14,15,16,17,18,19,20};
    int i=0;
    while(i<10)
    {
        printf("%d\n",arr[i]);
        i=i+1;
    }
    if(i>=10)
    {
        printf("努力\n");
    }
}
#include<stdio.h>
int add(int x,int y)
{int z=0;
     z=x+y;
     return z;
}
int main()
{
    int a=10;
    int b=5;
    int c=add(a,b);
    printf("%d\n",c);
    return 0;
}
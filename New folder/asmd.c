#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    printf("enter 5 numbers");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f = ((((a+b)*c)-d)/e);
    printf("%d+%d*%d-%d/%d=%d\n",a,b,c,d,e,f);
}

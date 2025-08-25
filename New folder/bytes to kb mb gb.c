#include<stdio.h>

int main()
{
    int b,kb,mb,gb;
    printf("enter bytes");
    scanf("%d",&b);
    kb = b / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    printf("%d bytes = %d kb = %d mb = %d gb",b,kb,mb,gb);
}





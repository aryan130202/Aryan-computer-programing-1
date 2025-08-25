#include<stdio.h>

int main()
{
    int n,g,d;
    printf("enter the gross sales");
    scanf("%d",&g);
    d = 10%g ;
    n = g  - d;
    printf("the net salary is %d\n",n);
}






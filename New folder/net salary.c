#include<stdio.h>

int main()
{
    int n,g,a,d;
    printf("enter the gross salary");
    scanf("%d",&g);
    a = 10%g ;
    d = 3%g ;
    n = g + a - d;
    printf("the net salary is %d\n",n);
}





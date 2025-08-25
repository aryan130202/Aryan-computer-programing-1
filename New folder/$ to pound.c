#include<stdio.h>

int main()
{
    int dol,p,rs;
    printf("enter amount in dollars");
    scanf("%d",&dol);
    rs = dol * 48;
    p = rs / 50;
    printf("%d dollars = %d pounds\n",dol,p);
}




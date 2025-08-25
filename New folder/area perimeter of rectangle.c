#include<stdio.h>

int main()
{
    int l,b,p,a;
    printf("enter the length and wigth of the rectangle");
    scanf("%d %d",&l,&b);
    p = (l + b)*2;
    a = l * b;
    printf("the perimeter of the rectangle is %d\n",p);
    printf("the area of the rectangle is %d\n",a);
}




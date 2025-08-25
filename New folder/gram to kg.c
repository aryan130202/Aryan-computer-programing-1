#include<stdio.h>

int main()
{
    int kg,g;
    printf("enter weight in grams");
    scanf("%d",&g);
    kg = g / 1000;
    printf("%d grams = %d kgs\n",g,kg);
}




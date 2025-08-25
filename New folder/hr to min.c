#include<stdio.h>

int main()
{
    int hr,min;
    printf("enter hours");
    scanf("%d",&hr);
    min = hr * 60;
    printf("%d hours = %d minutes\n",hr,min);
}

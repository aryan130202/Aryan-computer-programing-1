#include<stdio.h>

int main()
{
    int hr,min;
    printf("enter minutes");
    scanf("%d",&min);
    hr = min /  60;
    printf("%d minutes = %d hours\n",min,hr);
}

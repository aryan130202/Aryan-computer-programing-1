#include<stdio.h>

int main()
{
    int c,f;
    printf("enter temperature in fahrenheit");
    scanf("%d",&f);
    c = (f - 32)*5/9;
    printf("%d celcius = %d fahrenheit\n",c,f);
}






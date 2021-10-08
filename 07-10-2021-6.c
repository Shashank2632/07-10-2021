#include <stdio.h>
int main()
{
    int a=10,b=20,c=30,large;
    large=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("The larger number between %d ,%d and %d is %d",a,b,c,large);
    
}


#include<stdio.h>
int main()
{
    const  int a=1;
    const  int b=2;

    switch(a)
    {
    case a:
        printf("Bangladesh\n");
        break;
    case b:
        printf("Australia\n");
        break;
    case 3:
        printf("London\n");
        break;
    default:
        printf("England\n");
    }
}
/// normal variables are not allowed as case level
/// constant variable can use as case level

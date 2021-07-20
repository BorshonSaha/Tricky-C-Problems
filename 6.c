#include<stdio.h>
int main()
{
    int a=7;
    switch(a)
    {
    case 1:
    case 5:
    case 6:
        printf("Thailand\n");
        break;
    case 2:
        printf("Japan\n");
        break;
    case 3:
    case 7:
    case 10:
        printf("Bangladesh\n");
        break;
    default:
        printf("Australia\n");
    }
}

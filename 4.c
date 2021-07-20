#include<stdio.h>
int main()
{
    int i=65;
    switch(i)
    {
    case 65:
        printf("Integer 65\n");
        break;
    case 'A':
        printf("Char 65\n");
        break;
    default:
        printf("Bye\n");
    }
}

/// compile time error , duplicate case value

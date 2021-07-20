#include<stdio.h>
int main()
{
    int n=65; /// char c='A';
    switch(n)
    {
    case 64:
        printf("Case 64\n");
        break;
    case 'A': /// case 65:
        printf("Case A\n");
        break;
    default:
        printf("Default case\n");
    }
}
/// int can convert to char and vice versa

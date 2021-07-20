#include<stdio.h>
int main()
{
    int i=1;
    i++;
    switch(i--)
    {
    case 1:
        printf("Case 1 executed\n");
        break;
    case 2:
        printf("Case 2 executed\n");
        break;
    default:
        printf("Default case executed\n");
    }
}

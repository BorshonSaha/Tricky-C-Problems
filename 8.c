#include<stdio.h>
int main()
{
    switch(printf("Haii"))
    {
    case 1:
        printf("Bangladesh\n");
        break;
    case 2:
        printf("Australia\n");
        break;
    case 3:
        printf("England\n");
        break;
    case 4:
        printf("London\n");
        break;
    default:
        printf("Canada\n");
    }
}
/// printf() returns int type value
/// printf() will return that how many character have been passed

    /**int i=printf("Hello");
    printf("\n%d",i);**/

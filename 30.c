/// creating infinite loop in function
#include<stdio.h>

void display()
{
    printf("Hello ");
    display();
}

int main()
{
    display();
}

/// recursion without any condition act like a infinite loop

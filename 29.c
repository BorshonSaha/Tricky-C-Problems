/// represent infinite loop in goto
#include<stdio.h>
int main()
{
    int i=1;
    label:
        {
            if(1)
            {
                printf("%d ",i);
                i++;
                goto label;
            }
        }
}

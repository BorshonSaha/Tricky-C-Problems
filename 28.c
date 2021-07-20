/// iterate 1 to 10 without using loop
#include<stdio.h>
int main()
{
    int i=0;
    label:
        {
            if(i<10)
            {
                i++;
                printf("%d ",i);
                goto label;
            }
        }
}

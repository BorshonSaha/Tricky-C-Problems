#include<stdio.h>
int main()
{
    int i;
    i=10+010+0x20;
    printf("%d",i);
}
/// when a number starts from 0 it represents octal form
/// 010 -> octal number

/// when a number starts from 0x it represents hexadecimal form
/// 0x20 -> hexadecimal number

/** Octal to decimal (Right to Left)

    010 = 0*8p0 + 1*8p1 + 0*8p2
        = 0+8+0
        = 8

**/

/** Hexadecimal to decimal (Right to Left)

    20 = 0*16p1 + 2*16p0
       = 0+32
       = 32

**/

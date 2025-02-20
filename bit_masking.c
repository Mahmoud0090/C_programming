#include <stdio.h>

/*in this program we set bits 2,5 ,
and clearing bits 0,3,7 , and if bit 4 is high
we invert bit 1*/

#define MASK(x) ((unsigned char)(1<<x))

int main(void)
{
    __uint8_t num = 0b10011001;

    printf("the number before any operation is %b\n" , num);

    // seting bits 2,5
    num |= (MASK(2)|MASK(5));

    // clearing bits 0,3,7
    num &= ~(MASK(0) | MASK(3)| MASK(7));

    if(num & MASK(4))
    {
        num ^= MASK(1);
    }

    printf("the number is %b\n" , num);

    return 0;
}
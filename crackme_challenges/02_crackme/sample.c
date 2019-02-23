#include <stdint.h>
#include <stdio.h>



int count(int n);

int main()
{

    uint32_t a = 0x5a;
    uint32_t b = 0x1ec;
    uint32_t c = 0x00;

    c = a+b;
    c *= c;

    printf("%d", c);
    return 0;

}

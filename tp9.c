#include "lib.h"

int main(void)
{
    uint8_t a=0x11;//0001 0001
    uint8_t b=0xff;//1111 1111
    uint16_t d=0x11ff;//0001 0001 1111 1111

    void *ptr=&a;
    bitset(&ptr,3, sizeof(a));
    return 0;
}
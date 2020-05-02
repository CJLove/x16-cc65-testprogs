#include <cx16.h>
#include <conio.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t *ptr = (uint8_t*)0x9f29;
    printf("Current register value %x\n",*ptr);

    printf("Calling set_tv()\n");
    set_tv(3);
    printf("Current register value %x\n",*ptr);

    return 0;
}
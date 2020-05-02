#include <cx16.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    const uint8_t expected[] = { 0xff, 0x00, 0xff, 0x00 };

    uint8_t actual[] = { 0, 0, 0, 0 };
    int8_t i = 0;

    // vpoke()/vpeek() tests - don't care about specifying memory increment
    for (i = 0; i < 4; i++) {
        vpoke(expected[i],0x10000+i);
    }

    for (i = 0; i < 4; i++) {
        actual[i] = vpeek(0x10000+i);
    }

    for (i = 0; i < 4; i++) {
        if (expected[i] != actual[i]) {
            printf("Fail at index %d\n",i);
            return 1;
        }
    }

    // Reset memory
    for (i = 0; i < 4; i++) {
        vpoke(0,0x10000+i);
    }

    // vpoke() followed by VERA.data0, memory increment 1
    vpoke(expected[0],0x110000);
    for (i = 1; i < 4; i++)
        VERA.data0 = expected[i];

    for (i = 0; i < 4; i++) {
        actual[i] = vpeek(0x10000+i);
    }

    for (i = 0; i < 4; i++) {
        if (expected[i] != actual[i]) {
            printf("Fail at index %d\n",i);
            return 1;
        }
    }

    // Reset memory
    for (i = 0; i < 4; i++) {
        vpoke(0,0x10000+i);
    }

    // vpoke() followed by VERA.data0, memory increment 2
    vpoke(expected[0],0x210000);
    for (i = 1; i < 4; i++)
        VERA.data0 = expected[i];

    for (i = 0; i < 4; i++) {
        actual[i] = vpeek(0x10000+(i*2));
    }

    for (i = 0; i < 4; i++) {
        if (expected[i] != actual[i]) {
            printf("Fail at index %d\n",i);
            return 1;
        }
    }
    printf("PASSED\n");
    return 0;
}
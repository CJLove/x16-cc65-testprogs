#include <cx16.h>
#include <conio.h>
#include <stdint.h>
#include <stdio.h>

int main()
{
    uint8_t i = 0;
    printf("cputc():\n");

    for (i = 0; i < 10; i++) {
        cputc('a'+i);
    }

    printf("\ncputs()\n");

    cputs("test string\n");

    printf("\ncprintf()\n");

    cprintf("formatted string %d\n",i);

    cputcxy(20,20,'A');

    cputsxy(25,25,"test string");

    return 0;
}
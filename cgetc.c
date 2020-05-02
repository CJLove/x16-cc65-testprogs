#include <cx16.h>
#include <conio.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    // Enable blinking cursor
    cursor(1);
    
    while (1)
    {
        uint8_t c = 0;

        c = cgetc();

        printf("Got a character %c\n",c);
    }
    return 0;
}
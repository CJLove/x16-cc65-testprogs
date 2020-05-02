#include <cx16.h>
#include <conio.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    cursor(1);
    
    while (1)
    {
        if (kbhit()) {
            uint8_t c = 0;

            c = cgetc();

            printf("Got a character %c\n",c);

        }
    }
    return 0;
}
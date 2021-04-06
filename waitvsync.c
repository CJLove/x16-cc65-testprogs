#include <cx16.h>
#include <conio.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t i = 0;
    while (1)
    {
        waitvsync();
        printf(".");

        i++;
        if ((i % 30) == 0) {
            i = 0;
            printf("\n");
        }
    }
    return 0;
}

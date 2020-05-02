#include <cx16.h>
#include <conio.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t c = 0;

    printf("Default 80 column mode...hit any key\n");

    c = cgetc();

    videomode(VIDEOMODE_40COL);
    printf("40 column mode...hit any key\n");    

    c = cgetc();

    videomode(VIDEOMODE_80COL);
    printf("80 column mode...hit any key\n");

    c = cgetc();

    videomode(VIDEOMODE_40COL);
    printf("40 column mode...hit any key\n");     

    c = cgetc();

    videomode(VIDEOMODE_SWAP);
    printf("Swap mode back to 80...hit any key\n");

    c = cgetc();

    return 0;
}
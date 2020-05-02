#include <cx16.h>
#include <conio.h>
#include <stdio.h>

int main()
{

    char prevBgColor = 0;
    char prevTextColor = 0;
    char prevColor = bordercolor(COLOR_GREEN);
    printf("New border %d, Previous border %d\n",COLOR_GREEN,prevColor);

    prevColor = bordercolor(COLOR_BLUE);
    printf("New border %d, Previous border %d\n",COLOR_BLUE,prevColor);

    prevBgColor = bgcolor(COLOR_BLACK);
    prevTextColor = textcolor(COLOR_GREEN);

    printf("New bg %d, previous bg %d\n",COLOR_BLACK,prevBgColor);
    printf("New text %d, previous text %d\n",COLOR_GREEN,prevTextColor);

    prevBgColor = bgcolor(COLOR_BROWN);
    prevTextColor = textcolor(COLOR_ORANGE);

    printf("New bg %d, previous bg %d\n",COLOR_BROWN,prevBgColor);
    printf("New text %d, previous text %d\n",COLOR_ORANGE,prevTextColor);    

    return 0;
}
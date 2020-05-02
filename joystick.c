#include <cx16.h>
#include <stdint.h>
#include <conio.h>
#include <joystick.h>
#include <stdio.h>

int main()
{
    joy_install(cx16_std_joy);

    while (1) {
        int8_t joy = 0;
        waitvsync();

        joy = joy_read(0);

        if (joy & JOY_BTN_1_MASK) {
            printf("Button1\n");
        } else if (joy & JOY_BTN_2_MASK) {
            printf("Button2\n");
        } else if (joy & JOY_DOWN_MASK) {
            printf("Down\n");
        } else if (joy & JOY_UP_MASK) {
            printf("Up\n");
        } else if (joy & JOY_LEFT_MASK) {
            printf("Left\n");
        } else if (joy & JOY_RIGHT_MASK) {
            printf("Right\n");
        } 
    }
    return 0;
}
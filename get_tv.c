#include <cx16.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t mode = get_tv();

    printf("Mode = %d\n",mode);

    return 0;
}
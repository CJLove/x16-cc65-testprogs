#include <cx16.h>
#include <stdio.h>


int main()
{
    printf("VERA registers\n");
    printf("ADDRx_L:     0x%x\n",&VERA.address);
    printf("ADDRx_H:     0x%x\n",&VERA.address_hi);
    printf("DATA0:       0x%x\n",&VERA.data0);
    printf("DATA1:       0x%x\n",&VERA.data1);
    printf("CTRL:        0x%x\n",&VERA.control);
    printf("IEN:         0x%x\n",&VERA.irq_enable);
    printf("ISR:         0x%x\n",&VERA.irq_flags);
    printf("IRQLINE_L:   0x%x\n\n",&VERA.irq_raster);
    printf("DC_VIDEO:    0x%x    DC_HSTART:  0x%x\n",&VERA.display.video, &VERA.display.hstart);
    printf("DC_HSCALE:   0x%x    DC_HSTOP:   0x%x\n",&VERA.display.hscale, &VERA.display.hstop);
    printf("DC_VSCALE:   0x%x    DC_VSTART:  0x%x\n",&VERA.display.vscale, &VERA.display.vstart);
    printf("DC_BORDER:   0x%x    DC_VSTOP:   0x%x\n",&VERA.display.border, &VERA.display.vstop);
    printf("L0_CONFIG:   0x%x\n",&VERA.layer0.config);
    printf("L0_MAPBASE:  0x%x\n",&VERA.layer0.mapbase);
    printf("L0_TILEBASE: 0x%x\n",&VERA.layer0.tilebase);
    printf("L0_HSCROLL:  0x%x\n",&VERA.layer0.hscroll);
    printf("L0_VSCROLL:  0x%x\n",&VERA.layer0.vscroll);
    printf("L1_CONFIG:   0x%x\n",&VERA.layer1.config);
    printf("L1_MAPBASE:  0x%x\n",&VERA.layer1.mapbase);
    printf("L1_TILEBASE: 0x%x\n",&VERA.layer1.tilebase);
    printf("L1_HSCROLL:  0x%x\n",&VERA.layer1.hscroll);
    printf("L1_VSCROLL:  0x%x\n",&VERA.layer1.vscroll);
    printf("AUDIO_CTRL:  0x%x\n",&VERA.audio.control);
    printf("ADUIO_RATE:  0x%x\n",&VERA.audio.rate);
    printf("ADUIO_DATA:  0x%x\n",&VERA.audio.data);
    printf("SPI_DATA:    0x%x\n",&VERA.spi.data);
    printf("SPI_CTRL:    0x%x\n",&VERA.spi.control);


    return 0;
}

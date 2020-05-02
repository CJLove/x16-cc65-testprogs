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
    printf("IRQLINE_L:   0x%x\n\n",&VERA.irq_line);
    printf("DC_VIDEO:    0x%x    DC_HSTART:  0x%x\n",&VERA.dc_video, &VERA.dc_hstart);
    printf("DC_HSCALE:   0x%x    DC_HSTOP:   0x%x\n",&VERA.dc_hscale, &VERA.dc_hstop);
    printf("DC_VSCALE:   0x%x    DC_VSTART:  0x%x\n",&VERA.dc_vscale, &VERA.dc_vstart);
    printf("DC_BORDER:   0x%x    DC_VSTOP:   0x%x\n",&VERA.dc_border, &VERA.dc_vstop);
    printf("L0_CONFIG:   0x%x\n",&VERA.l0_config);
    printf("L0_MAPBASE:  0x%x\n",&VERA.l0_mapbase);
    printf("L0_TILEBASE: 0x%x\n",&VERA.l0_tilebase);
    printf("L0_HSCROLL_L:0x%x\n",&VERA.l0_hscroll);
    printf("L0_HSCROLL_H:0x%x\n",&VERA.l0_hscroll_hi);
    printf("L0_VSCROLL_L:0x%x\n",&VERA.l0_vscroll);
    printf("L0_VSCROLL_H:0x%x\n",&VERA.l0_vscroll_hi);
    printf("L1_CONFIG:   0x%x\n",&VERA.l1_config);
    printf("L1_MAPBASE:  0x%x\n",&VERA.l1_mapbase);
    printf("L1_TILEBASE: 0x%x\n",&VERA.l1_tilebase);
    printf("L1_HSCROLL_L:0x%x\n",&VERA.l1_hscroll);
    printf("L1_HSCROLL_H:0x%x\n",&VERA.l1_hscroll_hi);
    printf("L1_VSCROLL_L:0x%x\n",&VERA.l1_vscroll);
    printf("L1_VSCROLL_H:0x%x\n",&VERA.l1_vscroll_hi);
    printf("AUDIO_CTRL:  0x%x\n",&VERA.audio_ctrl);
    printf("ADUIO_RATE:  0x%x\n",&VERA.audio_rate);
    printf("ADUIO_DATA:  0x%x\n",&VERA.audio_data);
    printf("SPI_DATA:    0x%x\n",&VERA.spi_data);
    printf("SPI_CTRL:    0x%x\n",&VERA.spi_ctrl);


    return 0;
}
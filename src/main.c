#include "stm32f30x.h"
#include "nRF24L01.h"

int main(void) {
    if(SysTick_Config(SystemCoreClock / 1000)) {
        while(1) { }
    }


    nRF24_init();

/*    while(SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_TXE)==RESET);*/
/*    SPI_I2S_SendData16(SPI2, 0xA5);*/

    if (nRF24_Check() != 0) {
		while(1); // halted nrf24 check
	}

    while(1) {

    }

    return 0;
}



#include "SPI_int.h"
#include "Utils.h"
#include "RCC_Interface.h"
#include "GPIO_Interface.h"
void SPI_vInit()
{
	RCC_APB2EnableCLK(SPI1EN);

	/*1- CPHA and CPOL CFG*/
	SET_BIT(SPI->SPI_CR1,CPHA);
	SET_BIT(SPI->SPI_CR1,CPOL);
	/*2- select Master*/
	SET_BIT(SPI->SPI_CR1,MSTR);
	/*3- CFG BaudRate*/
	SPI->SPI_CR1 &= ~(0b111 << SPI_BR0);
	SPI->SPI_CR1 |= (0b110 << SPI_BR0);
	/*4- MSB first*/
	CLEAR_BIT(SPI->SPI_CR1,LSBFIRST);
	/*5- SSM and ISS CFG*/
	SET_BIT(SPI->SPI_CR1,SSI);
	SET_BIT(SPI->SPI_CR1,SSM);
	/*6- Data length*/
	CLEAR_BIT(SPI->SPI_CR1,DFF); // 8 bit
	/*7- SPI Enable*/
	SET_BIT(SPI->SPI_CR1,SPE);

	GPIO_CFG_t MOSI =
	{
			.PIN_Port=PORTA,
			.PIN_Number=PIN7,
			.PIN_Type=ALTERNATE,
			.PIN_OType=PUSH_PULL,
			.PIN_OSpeed=LOW_SPEED,
			.PIN_AF=AF5
	};
	GPIO_CFG_t MISO =
	{
			.PIN_Port=PORTA,
			.PIN_Number=PIN6,
			.PIN_Type=ALTERNATE,
			.PIN_IPullUpDown=NO_PULL,
			.PIN_OSpeed=LOW_SPEED,
			.PIN_AF=AF5
	};
	GPIO_CFG_t SCK =
	{
			.PIN_Port=PORTA,
			.PIN_Number=PIN5,
			.PIN_Type=ALTERNATE,
			.PIN_OType=PUSH_PULL,
			.PIN_OSpeed=LOW_SPEED,
			.PIN_AF=AF5

	};
	MGPIO_Init( &MOSI);
	MGPIO_Init( &MISO);
	MGPIO_Init( &SCK );


}
uint8_t SPI_Transceiving(uint8_t copy_u16Data)
{
	uint8_t k=0;
//	while(READ_BIT(SPI->SPI_SR,BSY));
	SPI->SPI_DR=copy_u16Data;
	while(READ_BIT(SPI->SPI_SR,BSY)==1)
	{
		asm("NOP");
	}
	k=SPI->SPI_DR;
	return k;
}

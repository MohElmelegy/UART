/*
 * UART_1.c
 *
 * Created: 9/14/2020 9:20:15 PM
 *  Author: allh akbar
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "UART_Interface.h"
#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	u8 Data_1;
	UART_Init();
	DIO_VidSetPinDirection(PORTD, PIN0, INPUT);
	DIO_VidSetPinDirection(PORTD, PIN1, OUTPUT);
	DIO_VidSetPinDirection(PORTA, PIN0, OUTPUT);
    while(1)
    {
       Data_1 = UART_ReceiveData();
	   UART_SendData(Data_1);
	   
	   if (Data_1 == 'o')
	   {
		   PORTA = ~ PORTA;
		   
	   }
	    
	    
    }
}
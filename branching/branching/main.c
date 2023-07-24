/*
 * branching.c
 *
 * Created: 7/24/2023 10:20:41 AM
 * Author : pc
 */ 

#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
   
   DDRA |= (1<<5);
   PORTA =0x00;
   
    while (1) 
    {
		_delay_ms(50);
		PORTA =0xFF;
		_delay_ms(50);
		PORTA =0x00;
		_delay_ms(50);
    }
}


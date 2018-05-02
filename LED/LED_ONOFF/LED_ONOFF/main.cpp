/*
 * LED_ONOFF.cpp
 *
 * Created: 2018-05-02 오전 10:51:45
 * Author : stc_19
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	int a,b;
    DDRD = 0xff;
	PORTD = 0xff;
    while (1) 
    {		
		for( int i = 0; i<7; i++)
		{
			PORTD = ~(0x01 << i);
			_delay_ms(300);
		}
		for( int i = 0; i<7; i++)
		{
			PORTD = ~(0x80>> i);
			_delay_ms(300);
		}
    }
}


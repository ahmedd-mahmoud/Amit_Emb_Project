
#include "HEATER_interface.h"

void HEATER_COOLER_init()
{
	DIO_setPinDir(HEATER_COOLER_PORT,HEATER_PIN,OUT);
	DIO_setPinDir(HEATER_COOLER_PORT,COOLER_PIN,OUT);
	DIO_setPinDir(HEATER_COOLER_PORT,HEATER_LED_PIN,OUT);	//LED direction
}

void HEATER_ON()
{
	DIO_setPinVal(HEATER_COOLER_PORT,HEATER_PIN,HIGH);
}

void HEATER_OFF()
{
	DIO_setPinVal(HEATER_COOLER_PORT,HEATER_PIN,LOW);	
	// LED OFF
	DIO_setPinVal(HEATER_COOLER_PORT,HEATER_LED_PIN,LOW);
}

void COOLER_ON()
{
	DIO_setPinVal(HEATER_COOLER_PORT,COOLER_PIN,HIGH);
	// LED ON
	DIO_setPinVal(HEATER_COOLER_PORT,HEATER_LED_PIN,HIGH);
}
void COOLER_OFF()
{
	DIO_setPinVal(HEATER_COOLER_PORT,COOLER_PIN,LOW);
	// LED OFF
	DIO_setPinVal(HEATER_COOLER_PORT,HEATER_LED_PIN,LOW);
}

void HEATER_LED(uint8 val)
{
	if(val == HIGH)
	{
		// LED ON
		DIO_setPinVal(HEATER_COOLER_PORT,HEATER_LED_PIN,HIGH);	
	}
	else if(val == TOG)
	{
		
		// LED BLINK
		DIO_setPinVal(HEATER_COOLER_PORT,HEATER_LED_PIN,HIGH);
		_delay_ms(50);
		DIO_setPinVal(HEATER_COOLER_PORT,HEATER_LED_PIN,LOW);
	}
	else
	{
		// LED OFF
		DIO_setPinVal(HEATER_COOLER_PORT,HEATER_LED_PIN,LOW);	
	}
}

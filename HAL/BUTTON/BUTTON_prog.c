


#include "BUTTON_interface.h"

void BTNS_init()
{
	DIO_setPinDir(BTNS_PORT,BTN_UP_PIN,IN);
	DIO_setPinDir(BTNS_PORT,BTN_DOWN_PIN,IN);
	
}

uint8 getBTN_UP_val()
{
	return DIO_getPinVal(BTNS_PORT,BTN_UP_PIN);
}

uint8 getBTN_DOWN_val()
{
	return DIO_getPinVal(BTNS_PORT,BTN_DOWN_PIN);

}


uint8 getBTN_ONOFF_val()
{
	return DIO_getPinVal(BTNS_PORT,BTN_ONOFF_PIN);
}
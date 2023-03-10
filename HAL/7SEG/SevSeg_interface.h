


#ifndef SEVSEG_INTERFACE_H_
#define SEVSEG_INTERFACE_H_

#include "../../MCAL/DIO/DIO.h"

#define SEG7_PORT		'B'
#define SEG7_EN_PORT	'C'
#define SEG7_EN1_PIN	 3
#define SEG7_EN2_PIN	 4

void SEG7_init();
void SEG7_setEnable(Bool EN1_state,Bool EN2_state);
void SEG7_display(uint16 val);





#endif /* SEVSEG_INTERFACE_H_ */
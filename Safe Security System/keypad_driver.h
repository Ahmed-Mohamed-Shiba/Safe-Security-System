/*
 * keypad_driver.h
 *
 *  Created on: Jul 6, 2022
 *      Author: Ahmed Shiba
 */ 


#ifndef KEYPAD_DRIVER_H_
#define KEYPAD_DRIVER_H_
#define NOTPRESSED 0xff
#include "DIO.h"
void keypad_vInit();
char keypad_u8check_press();



#endif /* KEYPAD_DRIVER_H_ */
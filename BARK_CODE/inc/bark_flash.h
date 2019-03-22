/*
 * bark_flash.h
 *
 *  Created on: Apr 2, 2018
 *      Author: matt
 */

#ifndef BARK_FLASH_H_
#define BARK_FLASH_H_


//***********************************************************************************
// Include files
//***********************************************************************************

#include "native_gecko.h"
#include "servo.h"

//***********************************************************************************
// Defines
//***********************************************************************************

#define ps_key_not_found	0x0502

//***********************************************************************************
// Global Variables
//***********************************************************************************


//***********************************************************************************
// function prototypes
//***********************************************************************************

void bark_save_servo_location(uint8);
uint8 bark_load_servo_location(void);

#endif /* BARK_FLASH_H_ */

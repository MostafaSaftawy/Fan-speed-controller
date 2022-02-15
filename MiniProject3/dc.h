/*
 * dc.h
 *
 *  Created on: Oct 13, 2021
 *      Author: Mostafa Saftawy
 */

#ifndef DC_H_
#define DC_H_


#include "gpio.h"
#include "PWM.h"

typedef enum
{
	STOP,CW,ACW
}DcMotor_State;

typedef enum
{
	OFF,ON
}FAN_State;

void DcMotor_Init(void);
void DcMotor_Rotate(DcMotor_State state,uint8 speed);

#endif /* DC_H_ */

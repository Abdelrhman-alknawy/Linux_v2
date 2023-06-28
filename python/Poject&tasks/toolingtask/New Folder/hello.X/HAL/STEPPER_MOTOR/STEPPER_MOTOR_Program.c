/*
 * STEPPER_MOTOR_Program.c
 *
 *  Created on: Apr 2, 2023
 *      Author: abdelrhman
 */
#include <avr/delay.h>
#include"..\..\LIB\STD_TYPES.h"
#include"..\..\LIB\BIT_MATH.h"
#include"..\..\MCAL\DIO\DIO_Interface.h"
#include"STEPPER_MOTOR_Interface.h"
#include"../../MCAL/DIO/DIO_Private.h"
#include"STEPPER_MOTOR_CONFIG.h"


void STEPPER_MOTOR_VoidStep1()
{
		DIO_voidSetPinValue(PORTC,PIN0,LOW);
		DIO_voidSetPinValue(PORTC,PIN1,HIGH);
		DIO_voidSetPinValue(PORTC,PIN2,HIGH);
		DIO_voidSetPinValue(PORTC,PIN3,HIGH);
}
void STEPPER_MOTOR_VoidStep2()
{
		DIO_voidSetPinValue(PORTC,PIN0,HIGH);
		DIO_voidSetPinValue(PORTC,PIN1,HIGH);
		DIO_voidSetPinValue(PORTC,PIN2,LOW);
		DIO_voidSetPinValue(PORTC,PIN3,HIGH);
}
void STEPPER_MOTOR_VoidStep3()
{
		DIO_voidSetPinValue(PORTC,PIN0,HIGH);
		DIO_voidSetPinValue(PORTC,PIN1,LOW);
		DIO_voidSetPinValue(PORTC,PIN2,HIGH);
		DIO_voidSetPinValue(PORTC,PIN3,HIGH);
}
void STEPPER_MOTOR_VoidStep4()
{
		DIO_voidSetPinValue(PORTC,PIN0,HIGH);
		DIO_voidSetPinValue(PORTC,PIN1,HIGH);
		DIO_voidSetPinValue(PORTC,PIN2,HIGH);
		DIO_voidSetPinValue(PORTC,PIN3,LOW);
}

void STEPPER_MOTOR_VoidInit(void)
{
	DIO_voidSetPinDirection(PORTC,PIN0,OUTPUT);
	DIO_voidSetPinDirection(PORTC,PIN1,OUTPUT);
	DIO_voidSetPinDirection(PORTC,PIN2,OUTPUT);
	DIO_voidSetPinDirection(PORTC,PIN3,OUTPUT);
}


void STEPPER_MOTOR_VoidStop(void)
{
	DIO_voidSetPinValue(PORTC,PIN0,OUTPUT);
	DIO_voidSetPinValue(PORTC,PIN1,OUTPUT);
	DIO_voidSetPinValue(PORTC,PIN2,OUTPUT);
	DIO_voidSetPinValue(PORTC,PIN3,OUTPUT);
}

void STEPPER_MOTOR_VoidMove(u16 Copy_u16_Angle,u8 Copy_u8Direction)
{
	u16 Local_Iterator ;
	u16 Local_Convert_Steps = ((Copy_u16_Angle*512)/360);
	switch(Copy_u8Direction)
	{
			case CW :
				for(Local_Iterator=0;Local_Iterator<Local_Convert_Steps;Local_Iterator++)
													{
					STEPPER_MOTOR_VoidStep1();
					STEPPER_MOTOR_VoidStep2();
					STEPPER_MOTOR_VoidStep3();
					STEPPER_MOTOR_VoidStep4();

					}
				break ;
			case CCW :
				for(Local_Iterator=0;Local_Iterator<Local_Convert_Steps;Local_Iterator++)
									{
					STEPPER_MOTOR_VoidStep4();
					STEPPER_MOTOR_VoidStep3();
					STEPPER_MOTOR_VoidStep2();
					STEPPER_MOTOR_VoidStep1();

									}
				break ;



	}
}

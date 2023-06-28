/**********************************************************************/
/*Function :LED_VoidOn                                              **/
/*i/p arguments :Copy_u8PortId options: PORTA, PORTB, PORTC, PORTD **/
/*Copy_u8PinId:PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7            **/
/*Return : void                                                  **/
/*****************************************************************/
#include"..\..\LIB\STD_TYPES.h"
#include"..\..\LIB\BIT_MATH.h"
#include"..\..\MCAL\DIO\DIO_Interface.h"
#include"LED_Interface.h"
#include"../../MCAL/DIO/DIO_Private.h"

void LED_Init(u8 Copy_u8PortId,u8 Copy_u8Direction)
{
	DIO_voidSetPinDirection(Copy_u8PortId,Copy_u8Direction,HIGH);
}

void LED_VoidOn(u8 Copy_u8PortId, u8 Copy_u8PinId)
{   
    if(Copy_u8PortId>PORTD)
    {
        //DO Nothing 
    }
    else 
    {
    	DIO_voidSetPinValue(Copy_u8PortId,Copy_u8PinId,HIGH);
    }
}
void LED_VoidOff(u8 Copy_u8PortId, u8 Copy_u8PinId)
{   
    if(Copy_u8PortId>PORTD)
    {
        //DO Nothing 
    }
    else 
    {
    	DIO_voidSetPinValue(Copy_u8PortId,Copy_u8PinId,LOW);
}

}
void LED_VoidPortOn(u8 Copy_u8PortId,u8 Copyu8Value)
{
	DIO_voidSetPortValue(Copy_u8PortId,0Xff);
}

void LED_VoidPORTOff(u8 Copy_u8PortId,u8 Copyu8Value)
{
	DIO_voidSetPortValue(Copy_u8PortId,0);
}

void LED_VoidPortInit(u8 Copy_u8PortId,u8 Copy_u8Value)
{
	DIO_voidSetPortDirection(Copy_u8PortId,Copy_u8Value);
}



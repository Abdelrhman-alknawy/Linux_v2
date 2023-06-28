/**************************************/
/**    Function Prototype            **/
/**************************************/
#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_
#define HIGH  1 
#define LOW   0 

/**********************************************************************/
/*Function :LED_VoidPortOn                                              **/
/*i/p arguments :Copy_u8PortId options: PORTA, PORTB, PORTC, PORTD **/
/*Copy_u8PinId:PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7            **/
/*Return : void                                                  **/
/*****************************************************************/


void LED_VoidPortOn(u8 Copy_u8PortId,u8 Copyu8Value);
/**********************************************************************/
/*Function :LED_VoidOn                                              **/
/*i/p arguments :Copy_u8PortId options: PORTA, PORTB, PORTC, PORTD **/
/*Copy_u8PinId:PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7            **/
/*Return : void                                                  **/
/*****************************************************************/

void LED_VoidPortInit(u8 Copy_u8PortId,u8 Copy_u8Value);
/**********************************************************************/
/*Function :LED_VoidOn                                              **/
/*i/p arguments :Copy_u8PortId options: PORTA, PORTB, PORTC, PORTD **/
/*Copy_u8PinId:PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7            **/
/*Return : void                                                  **/
/*****************************************************************/

void LED_VoidInit(u8 Copy_u8PortId,u8 Copy_u8PinId);
/**********************************************************************/
/*Function :LED_VoidOn                                              **/
/*i/p arguments :Copy_u8PortId options: PORTA, PORTB, PORTC, PORTD **/
/*Copy_u8PinId:PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7            **/
/*Return : void                                                  **/
/*****************************************************************/

void LED_VoidOn(u8 Copy_u8PortId, u8 Copy_u8PinId);
/**********************************************************************/
/*Function :LED_VoidOn                                              **/
/*i/p arguments :Copy_u8PortId options: PORTA, PORTB, PORTC, PORTD **/
/*Copy_u8PinId:PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7            **/
/*Return : void                                                  **/
/*****************************************************************/
void LED_VoidOff(u8 Copy_u8PortId, u8 Copy_u8PinId);
/**********************************************************************/
/*Function :LED_VoidPORTOff                                              **/
/*i/p arguments :Copy_u8PortId options: PORTA, PORTB, PORTC, PORTD **/
/*Copy_u8PinId:HIGH_PORT , LOW PORT             **/
/*Return : void                                                  **/
/*****************************************************************/
void LED_VoidPORTOff(u8 Copy_u8PortId,u8 Copyu8Value);
#endif

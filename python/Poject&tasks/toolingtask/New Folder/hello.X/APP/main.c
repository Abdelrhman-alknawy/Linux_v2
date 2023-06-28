
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include"../MCAL/SREG/SREG_Interface.h"
#include "../MCAL/DIO/DIO_Interface.h"

#include "../MCAL/ADC/ADC_Interface.h"
#include "../HAL/LED/LED_interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#define SREG    *((volatile u8 * )0x5F)

static	u16 temp_read ;
static	u16 Read ;
void Air_CONDITION();
int main()
{
	SET_BIT(SREG,7);
	LCD_VoidInit();
	ADC_voidInit();
	DIO_voidSetPinDirection(PORTA , PIN3 , INPUT);


	u8 Local_State ;
	Local_State =	ADC_u16GetAnalogReadASYNC(ADC3_SINGLE,& Read, &Air_CONDITION);
	while(1)
	{

	}
	return 0 ;
}


void Air_CONDITION()
{

	if(temp_read>25)
	{
		LCD_VoidSendCommand(DISPLAY_Clear);
		LCD_VoidSendString("Air Condtion ON");
		while(temp_read>25)
		{

			Read= ((u32)Read*5000UL)/1024UL;
			temp_read = Read/10 ;
			LCD_VoidGoto(LINE_2,0);
			LCD_VoidSendNum(temp_read);
		}


	}
	else
	{
		LCD_VoidSendCommand(DISPLAY_Clear);
		LCD_VoidSendString ("");
		LCD_VoidSendString ("Air Condtion OFF");
		while(temp_read<=25)
		{

			Read= ((u32)Read*5000UL)/1024UL;
			temp_read = Read/10 ;
			LCD_VoidGoto(LINE_2,0);
			LCD_VoidSendNum(temp_read);
		}
	}
}


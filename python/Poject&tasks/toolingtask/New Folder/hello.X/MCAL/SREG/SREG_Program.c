#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATH.h"
#include "SREG_Config.h"
#include "SREG_Interface.h"
#include "SREG_Private.h"
void SREG_VoidEnable(void)
{
	SET_BIT(SREG,7);
}
void SREG_VoidDisable(void)
{
	CLR_BIT(SREG,7);
}

/*****************************************************************************************
* @file               : delay.h
* @author             : ayangs
* @date               : 2019/02/19
* @brief              : Head files for delay.
******************************************************************************************/
#ifndef _delay_h_
#define _delay_h_
/*includes ------------------------------------------------------------------------------*/
#include "typedef.h"

/*macros --------------------------------------------------------------------------------*/

/*typedefs ------------------------------------------------------------------------------*/

/*variables -----------------------------------------------------------------------------*/

/*prototypes ----------------------------------------------------------------------------*/


void delay_init(uint32_t ticks_per_second);
void delay_ms(uint32_t ms);

#endif /* _delay_h_ */

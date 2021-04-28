#ifndef __LEDSTAT_H_
#define __LEDSTAT_H_
/**
 * @file blinky.h
 * @author 260213 ()
 * @brief Activity_1
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */



/**
 * Include files
 */ 
#include <avr/io.h>
#include "ledstat.h"
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB1)   /**< LED Pin number  */
/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void ledstat(uint8_t state);


#endif /** __LEDSTAT_H_ */
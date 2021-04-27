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
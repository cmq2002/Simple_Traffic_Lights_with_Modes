/*
 * global.h
 *
 *  Created on: Oct 5, 2022
 *      Author: acer
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include"software_timer.h"
#include "button.h"
#include "led_display.h"

// 4 modes available
#define INIT 0
#define MODE1  1
#define MODE2  2
#define MODE3  3
#define MODE4  4

// 4 buttons available
#define NUM_OF_BUTTON 4
#define BUTTON1 0
#define BUTTON2 1
#define BUTTON3 2
#define BUTTON4 3

// waiting time at each state
#define AUTO_RED 15
#define AUTO_GREEN 8
#define AUTO_YELLOW 5
#define THRESHOLD 0

//// use to specify which 7-seg led is blinked
#define DOZEN 1
#define UNIT 2

// variables use to keep track the system
extern int mode;
extern int status1;
extern int status2;
extern int status3;

extern int counterRed1 ;
extern int counterGreen1 ;
extern int counterYellow1 ;

extern int counterRed2 ;
extern int counterGreen2 ;
extern int counterYellow2 ;

#endif /* INC_GLOBAL_H_ */

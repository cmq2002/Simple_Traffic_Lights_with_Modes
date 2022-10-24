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

#define BUTTON1 0
#define BUTTON2 1
#define BUTTON3 2
#define BUTTON4 3

#define INIT 100
#define MODE1 = 1
#define MODE2 = 2
#define MODE3 = 3
#define MODE4 = 4

#define AUTO_RED 5
#define AUTO_GREEN 4
#define AUTO_YELLOW 3

#define MAN_RED       12
#define MAN_GREEN     13
#define MAN_YELLOW    14

#define THRESHOLD 0

extern int mode;
extern int status1;
extern int status2;

#endif /* INC_GLOBAL_H_ */

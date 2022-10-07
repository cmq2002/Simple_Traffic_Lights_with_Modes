/*
 * fsm_automatic.c
 *
 *  Created on: Oct 5, 2022
 *      Author: acer
 */

#include "fsm_automatic.h"

void fsm_automatic_run(void){
	switch (status){
		case INIT:
			status = AUTO_RED;
			setTimer1(500);
			break;
		case AUTO_RED:
			if (timer1_flag == 1){
				status = AUTO_GREEN;
				setTimer1(300);
			}
			break;
		case AUTO_GREEN:
			if (timer1_flag == 1){
				status = AUTO_YELLOW;
				setTimer1(200);
			}
			break;
		case AUTO_YELLOW:
			if (timer1_flag == 1){
				status = AUTO_RED;
				setTimer1(500);
			}
			break;
		default:
			break;
	}
}

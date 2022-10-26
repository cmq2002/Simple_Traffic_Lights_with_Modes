/*
 * global.c
 *
 *  Created on: Oct 5, 2022
 *      Author: acer
 */

#include "global.h"

int mode = 0;

int statusAUTO1 = 0;
int statusAUTO2 = 0;
int statusAUTO3 = 0;

int statusMODE2_1 = 0;
int statusMODE2_2 = 0;
int statusMODE2_3 = 0;

int AUTO_RED = 0;
int AUTO_GREEN = 0;
int AUTO_YELLOW = 0;

int counterRed1 = 0;
int counterGreen1 = 0;
int counterYellow1 = 0;

int counterRed2 = 0;
int counterGreen2 = 0;
int counterYellow2 = 0;

void initWaitingTime(void){
	AUTO_RED = 65;
	AUTO_GREEN = 88;
	AUTO_YELLOW = 3;
}

void initVar(void){
	mode = INIT;

	statusAUTO1 = INIT;
	statusAUTO2 = INIT;
	statusAUTO3 = INIT;

	statusMODE2_1 = INIT;
	statusMODE2_2 = INIT;
	statusMODE2_3 = INIT;

	counterRed1 = AUTO_RED;
	counterGreen1 = AUTO_GREEN;
	counterYellow1 = AUTO_YELLOW;

	counterRed2 = AUTO_RED;
	counterGreen2 = AUTO_GREEN;
	counterYellow2 = AUTO_YELLOW;
}

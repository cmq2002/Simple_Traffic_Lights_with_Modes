/*
 * button.c
 *
 *  Created on: Sep 21, 2022
 *      Author: KAI
 */

#include "button.h"

#define NUM_OF_BUTTON 4

static uint8_t buttonList[NUM_OF_BUTTON] = {BUTTON1_Pin, BUTTON2_Pin, BUTTON3_Pin, BUTTON4_Pin};

static GPIO_PinState KeyReg0[NUM_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
static GPIO_PinState KeyReg1[NUM_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
static GPIO_PinState KeyReg2[NUM_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
static GPIO_PinState KeyReg3[NUM_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

static int TimeOutForKeyPress =  500;
static uint8_t button_flag[NUM_OF_BUTTON] = {0, 0, 0, 0};

int isButtonPressed(int index){
	if(button_flag[index] == 1){
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(uint8_t index){
	button_flag[index] = 1;
}

void getKeyInput(){
	for(uint8_t i=0; i<NUM_OF_BUTTON; i++){
	  KeyReg2[i] = KeyReg1[i];
	  KeyReg1[i] = KeyReg0[i];
	  KeyReg0[i] = HAL_GPIO_ReadPin(GPIOA, buttonList[i]);
	  if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
		if (KeyReg2[i] != KeyReg3[i]){
		  KeyReg3[i] = KeyReg2[i];

		  if (KeyReg3[i] == PRESSED_STATE){
			TimeOutForKeyPress = 500;
			subKeyProcess(i);
		  }
		}else{
		   TimeOutForKeyPress --;
			if (TimeOutForKeyPress == 0){
			  KeyReg3[i] = NORMAL_STATE;
			}
		}
	  }
	}
}


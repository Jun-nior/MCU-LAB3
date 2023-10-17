/*
 * button.h
 *
 *  Created on: Oct 8, 2023
 *      Author: Vostro
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button1_flag;

void getKeyInput();
int isButton1Pressed();

#endif /* INC_BUTTON_H_ */

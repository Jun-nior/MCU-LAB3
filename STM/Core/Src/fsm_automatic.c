/*
 * fsm_automatic.c
 *
 *  Created on: Oct 19, 2023
 *      Author: Vostro
 */

#include "fsm_automatic.h"

void fsm_automatic_run() {
	switch(status) {
	case INIT:
		HAL_GPIO_WritePin(RED1_GPIO_Port,RED1_Pin,SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port,YELLOW1_Pin,SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port,GREEN1_Pin,SET);

		status=AUTO_RED;
		setTimer1(500);
		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(RED1_GPIO_Port,RED1_Pin,RESET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port,YELLOW1_Pin,SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port,GREEN1_Pin,SET);
		if (timer1_flag==1) {
			setTimer1(300);
			status=AUTO_GREEN;
		}
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(RED1_GPIO_Port,RED1_Pin,SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port,YELLOW1_Pin,SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port,GREEN1_Pin,RESET);
		if (timer1_flag==1) {
			setTimer1(200);
			status=AUTO_YELLOW;
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(RED1_GPIO_Port,RED1_Pin,SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port,YELLOW1_Pin,RESET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port,GREEN1_Pin,SET);
		if (timer1_flag==1) {
			setTimer1(500);
			status=AUTO_RED;
		}
		break;
	default:
		break;
	}
}

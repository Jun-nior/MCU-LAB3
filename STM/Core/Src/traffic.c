/*
 * traffic.c
 *
 *  Created on: Oct 20, 2023
 *      Author: Vostro
 */

#include "traffic.h"

void setcolor1(int color){
	switch (color) {
	case INIT:
		HAL_GPIO_WritePin(RED1_GPIO_Port,RED1_Pin,SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port,YELLOW1_Pin,SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port,GREEN1_Pin,SET);
		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(RED1_GPIO_Port,RED1_Pin,RESET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port,YELLOW1_Pin,SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port,GREEN1_Pin,SET);
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(RED1_GPIO_Port,RED1_Pin,SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port,YELLOW1_Pin,RESET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port,GREEN1_Pin,SET);
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(RED1_GPIO_Port,RED1_Pin,SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port,YELLOW1_Pin,SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port,GREEN1_Pin,RESET);
		break;
	default:
		break;
	}
}

void setcolor2(int color) {
	switch (color) {
	case INIT:
		HAL_GPIO_WritePin(RED2_GPIO_Port,RED2_Pin,SET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port,YELLOW2_Pin,SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port,GREEN2_Pin,SET);
		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(RED2_GPIO_Port,RED2_Pin,RESET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port,YELLOW2_Pin,SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port,GREEN2_Pin,SET);
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(RED2_GPIO_Port,RED2_Pin,SET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port,YELLOW2_Pin,RESET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port,GREEN2_Pin,SET);
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(RED2_GPIO_Port,RED2_Pin,SET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port,YELLOW2_Pin,SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port,GREEN2_Pin,RESET);
		break;
	default:
		break;
	}
}

void blinkled(int color) {
	switch (color) {
	case AUTO_RED:
		HAL_GPIO_TogglePin(RED1_GPIO_Port,RED1_Pin);
		HAL_GPIO_TogglePin(RED2_GPIO_Port,RED2_Pin);
		break;
	case AUTO_GREEN:
		HAL_GPIO_TogglePin(GREEN1_GPIO_Port,GREEN1_Pin);
		HAL_GPIO_TogglePin(GREEN2_GPIO_Port,GREEN2_Pin);
		break;
	case AUTO_YELLOW:
		HAL_GPIO_TogglePin(YELLOW1_GPIO_Port,YELLOW1_Pin);
		HAL_GPIO_TogglePin(YELLOW2_GPIO_Port,YELLOW2_Pin);
		break;
	default:
		break;
	}
}



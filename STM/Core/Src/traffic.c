/*
 * traffic.c
 *
 *  Created on: Oct 20, 2023
 *      Author: Vostro
 */

#include "traffic.h"

void display7SEG(int counter) {
	if (counter == 0) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);

	} else if (counter == 1) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
	} else if (counter == 2) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 3) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 4) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
	} else if (counter == 5) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 6) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 7) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 8) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 9) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	}
}

void display7SEG_2(int counter) {
	if (counter == 0) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);

	} else if (counter == 1) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);
	} else if (counter == 2) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
	} else if (counter == 3) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
	} else if (counter == 4) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);
	} else if (counter == 5) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
	} else if (counter == 6) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
	} else if (counter == 7) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
	} else if (counter == 8) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
	} else if (counter == 9) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
	}
}

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

int state7SEG=1;
void scan7SEG(int counter1, int counter2) {
	int one=counter1/10;
	int two=counter1%10;

	int three=counter2/10;
	int four=counter2%10;

	switch(state7SEG) {
	case 1:
		HAL_GPIO_WritePin(PA7_GPIO_Port,PA7_Pin,SET);
		HAL_GPIO_WritePin(PA8_GPIO_Port,PA8_Pin,RESET);

		display7SEG(two);
		display7SEG_2(four);
		state7SEG=2;
		break;
	case 2:
		HAL_GPIO_WritePin(PA7_GPIO_Port,PA7_Pin,RESET);
		HAL_GPIO_WritePin(PA8_GPIO_Port,PA8_Pin,SET);

		display7SEG(one);
		display7SEG_2(three);
		state7SEG=1;
		break;
	default:
		break;
	}
}



/*
 * fsm_automatic.c
 *
 *  Created on: Oct 19, 2023
 *      Author: Vostro
 */

#include "fsm_automatic.h"
#include "traffic.h"
#include "input_reading.h"

void fsm_automatic_run() {
	switch(status) {
	case INIT:
		setTimer1(green*100);
		setTimer2(100);
		setcolor1(AUTO_RED);
		setcolor2(AUTO_GREEN);
		counter1=red;
		counter2=green;
		status=RED_GREEN;
		break;
	case RED_GREEN:
		if (check_button_flag(0)) {
			status=2;
			tempt=red;
			setcolor1(AUTO_RED);
			setcolor2(AUTO_RED);
			setTimer1(50);
			setTimer3(25);
		}
		if (timer1_flag==1) {
			status=RED_YELLOW;
			setcolor2(AUTO_YELLOW);
			counter2=yellow;
			setTimer1(yellow*100);
			setTimer2(100);
			counter1--;
		}
		if (timer2_flag==1) {
			counter1--;
			counter2--;
			setTimer2(100);
		}
		break;
	case RED_YELLOW:
		if (timer1_flag==1) {
			status=GREEN_RED;
			counter1=green;
			counter2=red;
			setcolor1(AUTO_GREEN);
			setcolor2(AUTO_RED);
			setTimer1(green*100);
			setTimer2(100);
		}
		if (timer2_flag==1) {
			counter1--;
			counter2--;
			setTimer2(100);
		}
		break;
	case GREEN_RED:
		if (timer1_flag==1) {
			status=YELLOW_RED;
			setcolor1(AUTO_YELLOW);
			setTimer1(yellow*100);
			setTimer2(100);
			counter1=yellow;
			counter2--;
		}
		if (timer2_flag==1) {
			counter1--;
			counter2--;
			setTimer2(100);
		}
		break;
	case YELLOW_RED:
		if (timer1_flag==1) {
			status=RED_GREEN;
			counter1=red;
			counter2=green;
			setcolor1(AUTO_RED);
			setcolor2(AUTO_GREEN);
			setTimer1(yellow*100);
			setTimer2(100);
		}
		if (timer2_flag==1) {
			counter1--;
			counter2--;
			setTimer2(100);
		}
		break;
	default:
		break;
	}
}

void fsm_7SEG() {
	switch(status) {
	case 5:
	case 6:
	case 7:
	case 8:
		if (timer4_flag==1) {
			scan7SEG(counter1, counter2);
			setTimer4(50);
		}
		break;
	case 2:
	case 3:
	case 4:
		if (timer4_flag==1) {
			scan7SEG(tempt, status);
			setTimer4(50);
		}
	default:
		break;
	}
}

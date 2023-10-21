/*
 * fsm_automatic.c
 *
 *  Created on: Oct 19, 2023
 *      Author: Vostro
 */

#include "fsm_automatic.h"
#include "traffic.h"
void fsm_automatic_run() {
	switch(status) {
	case INIT:
		setTimer1(100);
		setcolor1(AUTO_RED);
		setcolor2(AUTO_GREEN);
		counter1=red;
		counter2=green;
		status=RED_GREEN;
		break;
	case RED_GREEN:
		if (timer1_flag==1) {
			if (counter2==1) {
				status=RED_YELLOW;
				counter1--;
				counter2=yellow;
				setcolor2(AUTO_YELLOW);
				setTimer1(100);
			} else {
				counter1--;
				counter2--;
				setTimer1(100);
			}
		}
		break;
	case RED_YELLOW:
		if (timer1_flag==1) {
			if (counter1==1) {
				status=GREEN_RED;
				counter1=green;
				counter2=red;
				setcolor1(AUTO_GREEN);
				setcolor2(AUTO_RED);
				setTimer1(100);
			} else {
				counter1--;
				counter2--;
				setTimer1(100);
			}
		}
		break;
	case GREEN_RED:
		if (timer1_flag==1) {
			if (counter1==1) {
				status=YELLOW_RED;
				counter2--;
				counter1=yellow;
				setcolor1(AUTO_YELLOW);
				setTimer1(100);
			} else {
				counter1--;
				counter2--;
				setTimer1(100);
			}
		}
		break;
	case YELLOW_RED:
		if (timer1_flag==1) {
			if (counter1==1) {
				status=RED_GREEN;
				counter1=red;
				counter2=green;
				setcolor1(AUTO_RED);
				setcolor2(AUTO_GREEN);
				setTimer1(100);
			} else {
				counter1--;
				counter2--;
				setTimer1(100);
			}
		}
		break;
	default:
		break;
	}
}

//void fsm_automatic_run() {
//	switch(status) {
//	case INIT:
//		setcolor1(INIT);
//		setcolor2(INIT);
//		status=AUTO_RED;
//		setTimer1(red*100);
//		counter1=red;
//		break;
//	case AUTO_RED:
//		setcolor1(AUTO_RED);
//		if (timer1_flag==1) {
//			setTimer1(green*100);
//			status=AUTO_GREEN;
//			counter1=green;
//		}
//		break;
//	case AUTO_GREEN:
//		setcolor1(AUTO_GREEN);
//		if (timer1_flag==1) {
//			setTimer1(yellow*100);
//			status=AUTO_YELLOW;
//			counter1=yellow;
//		}
//		break;
//	case AUTO_YELLOW:
//		setcolor1(AUTO_YELLOW);
//		if (timer1_flag==1) {
//			setTimer1(red*100);
//			status=AUTO_RED;
//			counter1=red;
//		}
//		break;
//	default:
//		break;
//	}
//
//	switch(status_2) {
//	case INIT:
//		setcolor2(INIT);
//		status_2=AUTO_GREEN;
//		setTimer2(green*100);
//		counter2=green;
//		break;
//	case AUTO_RED:
//		setcolor2(AUTO_RED);
//		if (timer2_flag==1) {
//			setTimer2(green*100);
//			status_2=AUTO_GREEN;
//			counter2=green;
//		}
//		break;
//	case AUTO_GREEN:
//		setcolor2(AUTO_GREEN);
//		if (timer2_flag==1) {
//			setTimer2(yellow*100);
//			status_2=AUTO_YELLOW;
//			counter2=yellow;
//		}
//		break;
//	case AUTO_YELLOW:
//		setcolor2(AUTO_YELLOW);
//		if (timer2_flag==1) {
//			setTimer2(red*100);
//			status_2=AUTO_RED;
//			counter2=red;
//		}
//		break;
//	default:
//		break;
//	}
//}

void fsm_7SEG() {
	switch(mode) {
	case 1:
		if (timer4_flag==1) {
			scan7SEG(counter1, counter2);
			setTimer4(50);
		}
		break;
	case 2:
	case 3:
	case 4:
		if (timer4_flag==1) {
			scan7SEG(tempt, mode);
			setTimer4(50);
		}
	default:
		break;
	}
}

/*
 * mode.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Vostro
 */

#include "mode.h"

void fsm_mode() {
	switch (mode) {
	case 1:
		fsm_automatic_run();
		if (is_button_pressed_1s(0)) {
			if (timer1_flag==1) {
				tempt=red;
				setcolor1(AUTO_RED);
				setcolor2(AUTO_RED);
				mode=2;
				setTimer1(100);
			}
		} else if (check_button_flag(0)) {
			mode=2;
			tempt=red;
			setcolor1(AUTO_RED);
			setcolor2(AUTO_RED);
			setTimer1(50);
			setTimer3(25);
		}
		break;
	case 2:
		if (is_button_pressed_1s(0)) {
			if (timer1_flag==1) {
				mode=3;
				tempt=yellow;
				setcolor1(AUTO_YELLOW);
				setcolor2(AUTO_YELLOW);
				setTimer1(100);
			}
		} else {
			if (timer1_flag==1) {
				blinkled(AUTO_RED);
				setTimer1(50);
			}
			if (check_button_flag(0)) {
				mode=3;
				tempt=yellow;
				setcolor1(AUTO_YELLOW);
				setcolor2(AUTO_YELLOW);
				setTimer1(50);
			}
		}
		if (is_button_pressed_1s(1)) {
			if (timer3_flag==1) {
				if (tempt>99) {
					tempt=1;
				} else tempt++;
				setTimer3(25);
			}
		} else if (check_button_flag(1)) {
			if (tempt>99) {
				tempt=1;
			} else tempt++;
		}
		if (check_button_flag(2)) {
			red=tempt;
			if (red>(green+yellow)) {
				green=red-yellow;
			} else if (red<(green+yellow)) {
				green=red/2;
				yellow=red/2;
				if (red%2!=0) {
					green+=1;
				}
			}
		}
		break;
	case 3:
		if (is_button_pressed_1s(0)) {
			if (timer1_flag==1) {
				mode=4;
				tempt=green;
				setcolor1(AUTO_GREEN);
				setcolor2(AUTO_GREEN);
				setTimer1(100);
			}
		} else {
			if (timer1_flag==1) {
				blinkled(AUTO_YELLOW);
				setTimer1(50);
			}
			if (check_button_flag(0)) {
				mode=4;
				tempt=green;
				setcolor1(AUTO_GREEN);
				setcolor2(AUTO_GREEN);
				setTimer1(50);
			}
		}
		if (is_button_pressed_1s(1)) {
			if (timer3_flag==1) {
				if (tempt>99) {
					tempt=1;
				} else tempt++;
				setTimer3(25);
			}
		} else if (check_button_flag(1)) {
			if (tempt>99) {
				tempt=1;
			} else tempt++;
		}
		if (check_button_flag(2)) {
			yellow=tempt;
			if (red!= (green+yellow)) {
				red=green+yellow;
				if (red>99) {
					red=99;
					green=red-yellow;
				}
			}
		}
		break;
	case 4:
		if (is_button_pressed_1s(0)) {
			if (timer1_flag==1) {
				mode=2;
				tempt=red;
				setcolor1(AUTO_RED);
				setcolor2(AUTO_RED);
				setTimer1(100);
			}
		} else {
			if (timer1_flag==1) {
				blinkled(AUTO_GREEN);
				setTimer1(50);
			}
			if (check_button_flag(0)) {
				mode=1;
				status=INIT;
			}
		}
		if (is_button_pressed_1s(1)) {
			if (timer3_flag==1) {
				if (tempt>99) {
					tempt=1;
				} else tempt++;
				setTimer3(25);
			}
		} else if (check_button_flag(1)) {
			if (tempt>99) {
				tempt=1;
			} else tempt++;
		}
		if (check_button_flag(2)) {
			green=tempt;
			if (red!= (green+yellow)) {
				red=green+yellow;
				if (red>99) {
					red=99;
					yellow=red-green;
				}
			}
		}
		break;
	default:
		break;
	}
}

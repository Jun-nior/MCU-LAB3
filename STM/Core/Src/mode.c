/*
 * mode.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Vostro
 */

#include "mode.h"

void fsm_mode() {
	switch (status) {
	case 2:
		if (timer1_flag==1) {
			blinkled(AUTO_RED);
			setTimer1(50);
		}
		if (check_button_flag(0)) {
			status=3;
			tempt=yellow;
			setcolor1(AUTO_YELLOW);
			setcolor2(AUTO_YELLOW);
			setTimer1(50);
		}
		if (check_button_flag(1)) {
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
		if (timer1_flag==1) {
			blinkled(AUTO_YELLOW);
			setTimer1(50);
		}
		if (check_button_flag(0)) {
			status=4;
			tempt=green;
			setcolor1(AUTO_GREEN);
			setcolor2(AUTO_GREEN);
			setTimer1(50);
		}
		if (check_button_flag(1)) {
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
		if (timer1_flag==1) {
			blinkled(AUTO_GREEN);
			setTimer1(50);
		}
		if (check_button_flag(0)) {
			status=INIT;
		}
		if (check_button_flag(1)) {
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

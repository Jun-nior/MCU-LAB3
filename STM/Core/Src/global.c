/*
 * global.c
 *
 *  Created on: Oct 8, 2023
 *      Author: Vostro
 */
#include "global.h"

int status=1;
int status_2=1;
int counter1=1;
int counter2=1;
int red=5;
int yellow=2;
int green=3;
int mode=1;
int tempt=1;
double x=1;

void calculate_x(uint32_t prescaler, uint32_t period) {
	x=((prescaler+1)/8000000.0)*period*1000;
	x=10/x;
}

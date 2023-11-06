/*
 * global.h
 *
 *  Created on: Oct 8, 2023
 *      Author: Vostro
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "main.h"

#define INIT		1
#define AUTO_RED	2
#define AUTO_GREEN	3
#define AUTO_YELLOW	4

#define RED_GREEN 	5
#define RED_YELLOW 	6
#define GREEN_RED	7
#define YELLOW_RED	8


extern int status;
extern int status_2;
extern int counter1;
extern int counter2;
extern int red;
extern int yellow;
extern int green;
extern int mode;
extern int tempt;
extern double x;

void calculate_x(uint32_t, uint32_t);

#endif /* INC_GLOBAL_H_ */

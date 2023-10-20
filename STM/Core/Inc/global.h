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
#include "button.h"

#define INIT		1
#define AUTO_RED	2
#define AUTO_GREEN	3
#define AUTO_YELLOW	4

#define MAN_RED		12
#define MAN_GREEN	13
#define MAN_YELLOW	14

extern int status;
extern int status_2;

#endif /* INC_GLOBAL_H_ */

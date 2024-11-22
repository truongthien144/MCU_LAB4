/*
 * scheduler.h
 *
 *  Created on: Nov 22, 2024
 *      Author: TruongThien
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "stdint.h"

#define SCH_MAX_TASKS 40
#define NO_TASK_ID 0

typedef struct {
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
} sTasks;


void SCH_Init(void);

uint8_t SCH_Add_Task(
		void (*pFunction)(),
		uint32_t DELAY,
		uint32_t PERIOD
);

void SCH_Dispatch_Tasks(void);
void SCH_Update_Tasks(void);
uint8_t SCH_Delete_Task(uint8_t task_index);

#endif /* INC_SCHEDULER_H_ */

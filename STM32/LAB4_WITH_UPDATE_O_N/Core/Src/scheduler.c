/*
 * scheduler.c
 *
 *  Created on: Nov 21, 2022
 *      Author: ACER
 */

#include "scheduler.h"

void SCH_Init(void){
	unsigned char i;
	for(i=0;i<SCH_MAX_TASKS;i++){
		SCH_Delete_Task(i);
	}
}

void SCH_Add_Task ( void (*pFunction)() ,uint32_t DELAY, uint32_t PERIOD){
	uint32_t Index=0;
	while((SCH_tasks_G[Index].pTask!=0)&&(Index<SCH_MAX_TASKS)){
		Index++;
	}
	if(Index==SCH_MAX_TASKS){
		return;
	}
	SCH_tasks_G[Index].pTask=pFunction;
	SCH_tasks_G[Index].Delay=DELAY/TICK;
	SCH_tasks_G[Index].Period=PERIOD/TICK;
	SCH_tasks_G[Index].RunMe=0;
}

void SCH_Update(void){
	unsigned char Index;
	for(Index=0;Index<SCH_MAX_TASKS;Index++){
		if(SCH_tasks_G[Index].pTask){
			if(SCH_tasks_G[Index].Delay==0){
				SCH_tasks_G[Index].RunMe+=1;
				if(SCH_tasks_G[Index].Period){
					SCH_tasks_G[Index].Delay=SCH_tasks_G[Index].Period;
				}
			}else{
				SCH_tasks_G[Index].Delay-=1;
			}
		}
	}
}

void SCH_Dispatch_Tasks(void){
	unsigned char Index;
	for(Index=0; Index< SCH_MAX_TASKS;Index++){
		if(SCH_tasks_G[Index].RunMe>0){
			(*SCH_tasks_G[Index].pTask)();
			SCH_tasks_G[Index].RunMe-=1;
			if(SCH_tasks_G[Index].Period==0){
				SCH_Delete_Task(Index);
			}
		}
	}
}

void SCH_Delete_Task(const uint32_t TASK_INDEX){
	SCH_tasks_G[TASK_INDEX].pTask=0x0000;
	SCH_tasks_G[TASK_INDEX].Delay=0;
	SCH_tasks_G[TASK_INDEX].Period=0;
	SCH_tasks_G[TASK_INDEX].RunMe=0;
}


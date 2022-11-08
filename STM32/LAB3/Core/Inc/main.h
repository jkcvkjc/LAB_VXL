/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SELECT_Pin GPIO_PIN_3
#define SELECT_GPIO_Port GPIOA
#define MODIFY_Pin GPIO_PIN_4
#define MODIFY_GPIO_Port GPIOA
#define SET_Pin GPIO_PIN_5
#define SET_GPIO_Port GPIOA
#define EN0_Pin GPIO_PIN_6
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_7
#define EN1_GPIO_Port GPIOA
#define SEG12_0_Pin GPIO_PIN_0
#define SEG12_0_GPIO_Port GPIOB
#define SEG12_1_Pin GPIO_PIN_1
#define SEG12_1_GPIO_Port GPIOB
#define SEG12_2_Pin GPIO_PIN_2
#define SEG12_2_GPIO_Port GPIOB
#define SEG34_3_Pin GPIO_PIN_10
#define SEG34_3_GPIO_Port GPIOB
#define SEG34_4_Pin GPIO_PIN_11
#define SEG34_4_GPIO_Port GPIOB
#define SEG34_5_Pin GPIO_PIN_12
#define SEG34_5_GPIO_Port GPIOB
#define SEG34_6_Pin GPIO_PIN_13
#define SEG34_6_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_8
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_9
#define EN3_GPIO_Port GPIOA
#define RED1_Pin GPIO_PIN_10
#define RED1_GPIO_Port GPIOA
#define YELLOW1_Pin GPIO_PIN_11
#define YELLOW1_GPIO_Port GPIOA
#define GREEN1_Pin GPIO_PIN_12
#define GREEN1_GPIO_Port GPIOA
#define RED2_Pin GPIO_PIN_13
#define RED2_GPIO_Port GPIOA
#define YELLOW2_Pin GPIO_PIN_14
#define YELLOW2_GPIO_Port GPIOA
#define GREEN2_Pin GPIO_PIN_15
#define GREEN2_GPIO_Port GPIOA
#define SEG12_3_Pin GPIO_PIN_3
#define SEG12_3_GPIO_Port GPIOB
#define SEG12_4_Pin GPIO_PIN_4
#define SEG12_4_GPIO_Port GPIOB
#define SEG12_5_Pin GPIO_PIN_5
#define SEG12_5_GPIO_Port GPIOB
#define SEG12_6_Pin GPIO_PIN_6
#define SEG12_6_GPIO_Port GPIOB
#define SEG34_0_Pin GPIO_PIN_7
#define SEG34_0_GPIO_Port GPIOB
#define SEG34_1_Pin GPIO_PIN_8
#define SEG34_1_GPIO_Port GPIOB
#define SEG34_2_Pin GPIO_PIN_9
#define SEG34_2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

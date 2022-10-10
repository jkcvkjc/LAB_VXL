/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  void display7SEG_1(int count){
	  int16_t array[10]={
//ma hex cua 2 led 7 doan ghep voi nhau
//vi du: led 7 doan 1: 5; led 7 doan 2: 3 => ghep lai duoc: 01100000010010(bin)=> 1812(hex)
//so hien thi tren led 7 doan: 1	2
			0x1812,			// 5	3
			0x1219,			// 4	2
			0x3cb0, 		// 3	1
			0x1224,			// 2	2
			0x3cf9,			// 1	1
			0x930,			// 3	5
			0xca4,			// 2	4
			0x1879, 		// 1	3
			0x1224,			// 2	2
			0x3cf9			// 1	1
	  };
	  //day gia tri ma hex cua so can hien thi vao thanh ghi
	  GPIOB->ODR=array[count];
  }
  int counter_display7seg=0;
  int state_led=0;
  int counter_second=-1;
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  if(state_led==0){
		  counter_second++;
		  if(counter_second<3){
			  //trang thai 1: led_red_1,led_green_2: bat
			  //			led_yellow_1,led_green_1,led_red_2,led_yellow_2:tat
			  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin,1);
			  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin,0);
			  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin,0);
			  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin,0);
			  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin,1);
			  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin,0);
		  }
		  if(counter_second>=3){
			  //trang thai 1: led_red_1,led_yellow_2: bat
			  //			led_yellow_1,led_green_1,led_red_2,led_green_2:tat
			  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin,1);
			  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin,0);
			  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin,0);
			  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin,0);
			  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin,0);
			  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin,1);
		  }
		  if(counter_second==5){
			  // set lai gia tri cua state_led va counter_second
			  state_led=1;
			  counter_second=0;
		  }
	  }
	  if(state_led==1){
		  counter_second++;
		  if(counter_second<=3){
			  //trang thai 1: led_red_2,led_green_1: bat
			  //			led_yellow_1,led_green_2,led_red_1,led_yellow_2:tat
			  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin,0);
			  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin,0);
			  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin,1);
			  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin,1);
			  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin,0);
			  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin,0);
		  }
		  if(counter_second>3){
			  //trang thai 1: led_red_2,led_yellow_1: bat
			  //			led_yellow_2,led_green_1,led_red_1,led_green_2:tat
			  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin,0);
			  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin,1);
			  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin,0);
			  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin,1);
			  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin,0);
			  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin,0);
		  }
		  if(counter_second==5){
			  //set lại gia tri cua state_led va counter_second
			  state_led=0;
			  counter_second=-1;
		  }
	  }
	  //goi ham hien thi 2 led 7 doan
	  display7SEG_1(counter_display7seg);
	  counter_display7seg++;
	  //set lai gia tri cua counter_display7seg
	  if(counter_display7seg==10) counter_display7seg=0;
	  HAL_Delay(1000);
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_1_1_Pin|LED_1_2_Pin|LED_1_3_Pin|LED_2_4_Pin
                          |LED_2_5_Pin|LED_2_6_Pin|LED_2_7_Pin|LED_1_4_Pin
                          |LED_1_5_Pin|LED_1_6_Pin|LED_1_7_Pin|LED_2_1_Pin
                          |LED_2_2_Pin|LED_2_3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_1_Pin LED_YELLOW_1_Pin LED_GREEN_1_Pin LED_RED_2_Pin
                           LED_YELLOW_2_Pin LED_GREEN_2_Pin */
  GPIO_InitStruct.Pin = LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_1_1_Pin LED_1_2_Pin LED_1_3_Pin LED_2_4_Pin
                           LED_2_5_Pin LED_2_6_Pin LED_2_7_Pin LED_1_4_Pin
                           LED_1_5_Pin LED_1_6_Pin LED_1_7_Pin LED_2_1_Pin
                           LED_2_2_Pin LED_2_3_Pin */
  GPIO_InitStruct.Pin = LED_1_1_Pin|LED_1_2_Pin|LED_1_3_Pin|LED_2_4_Pin
                          |LED_2_5_Pin|LED_2_6_Pin|LED_2_7_Pin|LED_1_4_Pin
                          |LED_1_5_Pin|LED_1_6_Pin|LED_1_7_Pin|LED_2_1_Pin
                          |LED_2_2_Pin|LED_2_3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

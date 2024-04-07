/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_UART_Pin GPIO_PIN_13
#define LED_UART_GPIO_Port GPIOC
#define IN3_Pin GPIO_PIN_14
#define IN3_GPIO_Port GPIOC
#define IN4_Pin GPIO_PIN_15
#define IN4_GPIO_Port GPIOC
#define Buzzer_Pin GPIO_PIN_4
#define Buzzer_GPIO_Port GPIOA
#define ENR_A_Pin GPIO_PIN_2
#define ENR_A_GPIO_Port GPIOB
#define ENL_A_Pin GPIO_PIN_10
#define ENL_A_GPIO_Port GPIOB
#define ENR_B_Pin GPIO_PIN_12
#define ENR_B_GPIO_Port GPIOB
#define ENL_B_Pin GPIO_PIN_13
#define ENL_B_GPIO_Port GPIOB
#define ENR_C_Pin GPIO_PIN_14
#define ENR_C_GPIO_Port GPIOB
#define ENL_C_Pin GPIO_PIN_15
#define ENL_C_GPIO_Port GPIOB
#define ENR_D_Pin GPIO_PIN_10
#define ENR_D_GPIO_Port GPIOA
#define ENL_D_Pin GPIO_PIN_15
#define ENL_D_GPIO_Port GPIOA
#define IN1_Pin GPIO_PIN_4
#define IN1_GPIO_Port GPIOB
#define IN2_Pin GPIO_PIN_5
#define IN2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

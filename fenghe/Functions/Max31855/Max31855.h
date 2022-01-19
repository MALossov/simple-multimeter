/**
  ******************************************************************************
  * @file           : max31855.h
  * @brief          : header for max31855.c file.
  *                  ���ļ�����max31855�Ĺ������塣
  ******************************************************************************
  *
  * 
  * 
  *
  ******************************************************************************
  */
 
/* �����Է�ֹ�ݹ���� -------------------------------------*/
#ifndef __MAX31855_H__
#define __MAX31855_H__
 
/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "stdbool.h"
#include "spi.h"
#include "stdio.h"
/* Private define ------------------------------------------------------------*/
/* SPI Simulator define for MAX31855, 0: use SPI2, 1: use simulator */   
#define SPI_SIM 0 //SPIѡ��ģ�⻹��Ӳ����Ĭ����ʹ��SPIӲ����
 
//#define MAX_SPI_GPIO_Port		GPIOA
//#define MAX_SPI_CS_Pin			GPIO_PIN_4
//#define MAX_SPI_SCK_Pin			GPIO_PIN_5
//#define MAX_SPI_MISO_Pin		GPIO_PIN_6
//#define MAX_SPI_MOSI_Pin		GPIO_PIN_7

#define SPI1_CS_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_4

#define SPI1_CS_L	HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_RESET)	//CS�õ�
#define SPI1_CS_H	HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_SET)		//CS�ø�
 
/* Exported macro ------------------------------------------------------------*/
 
/* Exported types ------------------------------------------------------------*/
 
/* Exported variables --------------------------------------------------------*/
 
/* Exported functions ------------------------------------------------------- */
void Max31855GetTemp(void);
double returnTemp();
//float Max31855TCTemp(void);
//float Max31855CJTemp(void);
 
#endif /* __MAX31855_H__ */
 
/*********END OF FILE****/
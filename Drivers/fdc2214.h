#ifndef __FDC2214_H__
#define __FDC2214_H__

#include "stm32F1xx_hal.h"
#include "main.h"
#include "i2c.h"
#include "tim.h"

#define FDC2214 0x2A << 1
#define DATA_MSB_CH0 0x00
#define DATA_LSB_CH0 0x01
#define DATA_MSB_CH1 0x02
#define DATA_LSB_CH1 0x03
#define DATA_MSB_CH2 0x04
#define DATA_LSB_CH2 0x05
#define DATA_MSB_CH3 0x06
#define DATA_LSB_CH3 0x07
#define RCOUNT_CH0 0x08
#define RCOUNT_CH1 0x09
#define RCOUNT_CH2 0x0A
#define RCOUNT_CH3 0x0B
#define OFFSET_CH0 0x0C
#define OFFSET_CH1 0x0D
#define OFFSET_CH2 0x0E
#define OFFSET_CH3 0x0F
#define SETTLECOUNT_CH0 0x10
#define SETTLECOUNT_CH1 0x11
#define SETTLECOUNT_CH2 0x12
#define SETTLECOUNT_CH3 0x13
#define CLOCK_DIVIDERS_C_CH0 0x14
#define CLOCK_DIVIDERS_C_CH1 0x15
#define CLOCK_DIVIDERS_C_CH2 0x16
#define CLOCK_DIVIDERS_C_CH3 0x17
#define STATUS 0x18
#define ERROR_CONFIG 0x19
#define CONFIG 0x1A
#define MUX_CONFIG 0x1B
#define RESET_DEV 0x1C
#define DRIVE_CURRENT_CH0 0x1E
#define DRIVE_CURRENT_CH1 0x1F
#define DRIVE_CURRENT_CH2 0x20
#define DRIVE_CURRENT_CH3 0x21
#define MANUFACTURER_ID 0x7E
#define DEVICE_ID 0x7F
#define MANUFACTURER_ID_val 0x5449
#define DEVICE_ID_val 0x3055

uint8_t FDC2214_Init();
uint32_t FDC2214_GetCapacitanceData(uint8_t channel);

#endif

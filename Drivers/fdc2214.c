#include "fdc2214.h"

extern I2C_HandleTypeDef hi2c2;

uint8_t FDC2214_Init(void)
{
	uint8_t i = 0;
	uint8_t cof[2];
	volatile uint16_t check[2];
	cof[0] = 0xFF;
	cof[1] = 0xFF;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, RCOUNT_CH0, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0xFF;
	cof[1] = 0xFF;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, RCOUNT_CH1, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0xFF;
	cof[1] = 0xFF;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, RCOUNT_CH2, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0xFF;
	cof[1] = 0xFF;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, RCOUNT_CH3, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x00;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, OFFSET_CH0, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x00;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, OFFSET_CH1, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x00;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, OFFSET_CH2, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x00;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, OFFSET_CH3, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x04;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, SETTLECOUNT_CH0, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x04;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, SETTLECOUNT_CH1, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x04;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, SETTLECOUNT_CH2, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x04;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, SETTLECOUNT_CH3, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x10;
	cof[1] = 0x01;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, CLOCK_DIVIDERS_C_CH0, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x10;
	cof[1] = 0x01;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, CLOCK_DIVIDERS_C_CH1, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x10;
	cof[1] = 0x01;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, CLOCK_DIVIDERS_C_CH2, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x10;
	cof[1] = 0x01;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, CLOCK_DIVIDERS_C_CH3, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x00;
	cof[1] = 0x01;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, ERROR_CONFIG, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x1e;
	cof[1] = 0x01;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, CONFIG, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0xC2;
	cof[1] = 0x0C;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, MUX_CONFIG, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x00;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, RESET_DEV, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x8c;
	cof[1] = 0x40;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, DRIVE_CURRENT_CH0, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x8c;
	cof[1] = 0x40;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, DRIVE_CURRENT_CH1, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x88;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, DRIVE_CURRENT_CH2, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	cof[0] = 0x88;
	cof[1] = 0x00;
	HAL_I2C_Mem_Write(&hi2c2, FDC2214, DRIVE_CURRENT_CH3, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	HAL_I2C_Mem_Read(&hi2c2, FDC2214, MANUFACTURER_ID, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	check[0] = cof[1] | cof[0] << 8;

	HAL_I2C_Mem_Read(&hi2c2, FDC2214, DEVICE_ID, I2C_MEMADD_SIZE_8BIT, cof, 2, 100);
	for (i = 0; i < 20; i++)
		;
	check[1] = cof[1] | cof[0] << 8;
	if ((check[0] == MANUFACTURER_ID_val) && (check[1] == DEVICE_ID_val))
		return 0;
	else
		return 1;
}

uint32_t FDC2214_GetCapacitanceData(uint8_t channel)
{
	volatile uint32_t data;
	uint8_t i = 0;
	uint8_t pdata[4];
	switch (channel)
	{
	case 0:
		HAL_I2C_Mem_Read(&hi2c2, FDC2214, DATA_MSB_CH0, I2C_MEMADD_SIZE_8BIT, pdata, 2, 100);
		for (i = 0; i < 20; i++)
			;
		HAL_I2C_Mem_Read(&hi2c2, FDC2214, DATA_LSB_CH0, I2C_MEMADD_SIZE_8BIT, pdata + 2, 2, 100);
		for (i = 0; i < 20; i++)
			;
		data = ((pdata[0] << 24 | pdata[1] << 16 | pdata[2] << 8 | pdata[3]) & 0x0fffffff);
		return data;
	case 1:
		HAL_I2C_Mem_Read(&hi2c2, FDC2214, DATA_MSB_CH1, I2C_MEMADD_SIZE_8BIT, pdata, 2, 100);
		for (i = 0; i < 20; i++)
			;
		HAL_I2C_Mem_Read(&hi2c2, FDC2214, DATA_LSB_CH1, I2C_MEMADD_SIZE_8BIT, pdata + 2, 2, 100);
		for (i = 0; i < 20; i++)
			;
		data = ((pdata[0] << 24 | pdata[1] << 16 | pdata[2] << 8 | pdata[3]) & 0x0fffffff);
		return data;
	case 2:
		HAL_I2C_Mem_Read(&hi2c2, FDC2214, DATA_MSB_CH2, I2C_MEMADD_SIZE_8BIT, pdata, 2, 100);
		for (i = 0; i < 20; i++)
			;
		HAL_I2C_Mem_Read(&hi2c2, FDC2214, DATA_LSB_CH2, I2C_MEMADD_SIZE_8BIT, pdata + 2, 2, 100);
		for (i = 0; i < 20; i++)
			;
		data = ((pdata[0] << 24 | pdata[1] << 16 | pdata[2] << 8 | pdata[3]) & 0x0fffffff);
		return data;
	case 3:
		HAL_I2C_Mem_Read(&hi2c2, FDC2214, DATA_MSB_CH3, I2C_MEMADD_SIZE_8BIT, pdata, 2, 100);
		for (i = 0; i < 20; i++)
			;
		HAL_I2C_Mem_Read(&hi2c2, FDC2214, DATA_LSB_CH3, I2C_MEMADD_SIZE_8BIT, pdata + 2, 2, 100);
		for (i = 0; i < 20; i++)
			;
		data = ((pdata[0] << 24 | pdata[1] << 16 | pdata[2] << 8 | pdata[3]) & 0x0fffffff);
		return data;
	default:
		return 0;
	}
}

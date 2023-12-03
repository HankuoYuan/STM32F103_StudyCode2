//
// Created by Hankuo Yuan on 2023/12/3.
//

#ifndef STM32F103_STUDYCODE2_BSP_ADC_H
#define STM32F103_STUDYCODE2_BSP_ADC_H

#endif //STM32F103_STUDYCODE2_BSP_ADC_H
#ifndef BSP_ADC_H
#define BSP_ADC_H

#include "struct_typedef.h"
#include "main.h"

extern void init_vrefint_reciprocal(void);

extern fp32 get_temprate(void);

extern fp32 get_battery_voltage(void);

extern uint8_t get_hardware_version(void);

extern fp32 get_resistor_percent(void);

extern fp32 get_resistor_voltage(void);

#endif

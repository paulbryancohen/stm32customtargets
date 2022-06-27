/* mbed Microcontroller Library
 * SPDX-License-Identifier: BSD-3-Clause
 ******************************************************************************
 *
 * Copyright (c) 2016-2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 *
 * Automatically generated from STM32CubeMX/db/mcu/STM32L562QEIx.xml
 */

#include "PeripheralPins.h"
#include "mbed_toolchain.h"

//==============================================================================
// Notes
//
// - The pins mentioned Px_y_ALTz are alternative possibilities which use other
//   HW peripheral instances. You can use them the same way as any other "normal"
//   pin (i.e. PwmOut pwm(PA_7_ALT0);). These pins are not displayed on the board
//   pinout image on mbed.org.
//
// - The pins which are connected to other components present on the board have
//   the comment "Connected to xxx". The pin function may not work properly in this
//   case. These pins may not be displayed on the board pinout image on mbed.org.
//   Please read the board reference manual and schematic for more information.
//
// - Warning: pins connected to the default STDIO_UART_TX and STDIO_UART_RX pins are commented
//   See https://os.mbed.com/teams/ST/wiki/STDIO for more information.
//
//==============================================================================


//*** ADC ***

MBED_WEAK const PinMap PinMap_ADC[] = {
    {PA_0,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC1_IN5
    {PA_0_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC2_IN5
    {PA_1,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC1_IN6
    {PA_1_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC2_IN6
    {PA_2,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC1_IN7
    {PA_2_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC2_IN7
    {PA_3,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC1_IN8
    {PA_3_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC2_IN8
    {PA_4,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC1_IN9
    {PA_4_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC2_IN9
    {PA_5,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC1_IN10
    {PA_5_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC2_IN10
    {PA_6,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC1_IN11
    {PA_6_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC2_IN11
    {PA_7,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC1_IN12
    {PA_7_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC2_IN12
    {PB_0,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC1_IN15
    {PB_0_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC2_IN15
    {PB_1,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 16, 0)}, // ADC1_IN16
    {PB_1_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 16, 0)}, // ADC2_IN16
    {PC_0,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC1_IN1
    {PC_0_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC2_IN1
    {PC_1,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC1_IN2
    {PC_1_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC2_IN2
    {PC_2,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC1_IN3
    {PC_2_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC2_IN3
    {PC_3,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC1_IN4
    {PC_3_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC2_IN4
    {PC_4,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC1_IN13
    {PC_4_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC2_IN13
    {PC_5,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC1_IN14
    {PC_5_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC2_IN14
    {NC, NC, 0}
};

// !!! SECTION TO BE CHECKED WITH DEVICE REFERENCE MANUAL
MBED_WEAK const PinMap PinMap_ADC_Internal[] = {
//     {ADC_TEMP,   ADC_1,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 16, 0)},
//     {ADC_VREF,   ADC_1,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 17, 0)},
//     {ADC_VBAT,   ADC_1,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 18, 0)},
    {NC, NC, 0}
};

//*** DAC ***

MBED_WEAK const PinMap PinMap_DAC[] = {
    {PA_4,       DAC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // DAC1_OUT1
    {PA_5,       DAC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // DAC1_OUT2
    {NC, NC, 0}
};

//*** I2C ***

MBED_WEAK const PinMap PinMap_I2C_SDA[] = {
    {PB_4,       I2C_3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
    {PB_7,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {PB_7_ALT0,  I2C_4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C4)},
    {PB_9,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {PB_11,      I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
    {PB_11_ALT0, I2C_4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF3_I2C4)},
    {PB_14,      I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
    {PC_1,       I2C_3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
    {PD_13,      I2C_4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C4)},
    {PF_0,       I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
    {PF_15,      I2C_4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C4)},
    {PG_8,       I2C_3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
    {PG_13,      I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_I2C_SCL[] = {
    {PA_7,       I2C_3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
    {PB_6,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {PB_6_ALT0,  I2C_4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C4)},
    {PB_8,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {PB_10,      I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
    {PB_10_ALT0, I2C_4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF3_I2C4)},
    {PB_13,      I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
    {PC_0,       I2C_3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
    {PD_12,      I2C_4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C4)},
    {PF_1,       I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
    {PF_14,      I2C_4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C4)},
    {PG_7,       I2C_3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
    {PG_14,      I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {NC, NC, 0}
};

//*** PWM ***

// TIM5 cannot be used because already used by the us_ticker
// (update us_ticker_data.h file if another timer is chosen)
MBED_WEAK const PinMap PinMap_PWM[] = {
    {PA_0,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
//  {PA_0,       PWM_5,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM5, 1, 0)}, // TIM5_CH1
    {PA_1,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM2, 2, 0)}, // TIM2_CH2
//  {PA_1,       PWM_5,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM5, 2, 0)}, // TIM5_CH2
    {PA_1_ALT0,  PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM15, 1, 1)}, // TIM15_CH1N
    {PA_2,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM2, 3, 0)}, // TIM2_CH3
//  {PA_2,       PWM_5,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM5, 3, 0)}, // TIM5_CH3
    {PA_2_ALT0,  PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM15, 1, 0)}, // TIM15_CH1
    {PA_3,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM2, 4, 0)}, // TIM2_CH4
//  {PA_3,       PWM_5,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM5, 4, 0)}, // TIM5_CH4
    {PA_3_ALT0,  PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM15, 2, 0)}, // TIM15_CH2
    {PA_5,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
    {PA_5_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_TIM8, 1, 1)}, // TIM8_CH1N
    {PA_6,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
    {PA_6_ALT0,  PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM16, 1, 0)}, // TIM16_CH1
    {PA_7,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 1, 1)}, // TIM1_CH1N
    {PA_7_ALT0,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
    {PA_7_ALT1,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_TIM8, 1, 1)}, // TIM8_CH1N
    {PA_7_ALT2,  PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM17, 1, 0)}, // TIM17_CH1
    {PA_8,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 1, 0)}, // TIM1_CH1
    {PA_9,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 2, 0)}, // TIM1_CH2
    {PA_10,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 3, 0)}, // TIM1_CH3
    {PA_11,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 4, 0)}, // TIM1_CH4
    {PA_15,      PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
    {PB_0,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 2, 1)}, // TIM1_CH2N
    {PB_0_ALT0,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
    {PB_0_ALT1,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_TIM8, 2, 1)}, // TIM8_CH2N
    {PB_1,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 3, 1)}, // TIM1_CH3N
    {PB_1_ALT0,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
    {PB_1_ALT1,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_TIM8, 3, 1)}, // TIM8_CH3N
    {PB_3,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM2, 2, 0)}, // TIM2_CH2
    {PB_4,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
    {PB_5,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
    {PB_6,       PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM4, 1, 0)}, // TIM4_CH1
    {PB_6_ALT0,  PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM16, 1, 1)}, // TIM16_CH1N
    {PB_7,       PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM4, 2, 0)}, // TIM4_CH2
    {PB_7_ALT0,  PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM17, 1, 1)}, // TIM17_CH1N
    {PB_8,       PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM4, 3, 0)}, // TIM4_CH3
    {PB_8_ALT0,  PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM16, 1, 0)}, // TIM16_CH1
    {PB_9,       PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
    {PB_9_ALT0,  PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM17, 1, 0)}, // TIM17_CH1
    {PB_10,      PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM2, 3, 0)}, // TIM2_CH3
    {PB_11,      PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM2, 4, 0)}, // TIM2_CH4
    {PB_13,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 1, 1)}, // TIM1_CH1N
    {PB_13_ALT0, PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM15, 1, 1)}, // TIM15_CH1N
    {PB_14,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 2, 1)}, // TIM1_CH2N
    {PB_14_ALT0, PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_TIM8, 2, 1)}, // TIM8_CH2N
    {PB_14_ALT1, PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM15, 1, 0)}, // TIM15_CH1
    {PB_15,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 3, 1)}, // TIM1_CH3N
    {PB_15_ALT0, PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_TIM8, 3, 1)}, // TIM8_CH3N
    {PB_15_ALT1, PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM15, 2, 0)}, // TIM15_CH2
    {PC_6,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
    {PC_6_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_TIM8, 1, 0)}, // TIM8_CH1
    {PC_7,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
    {PC_7_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_TIM8, 2, 0)}, // TIM8_CH2
    {PC_8,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
    {PC_8_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_TIM8, 3, 0)}, // TIM8_CH3
    {PC_9,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
    {PC_9_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_TIM8, 4, 0)}, // TIM8_CH4
    {PD_12,      PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM4, 1, 0)}, // TIM4_CH1
    {PD_13,      PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM4, 2, 0)}, // TIM4_CH2
    {PD_14,      PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM4, 3, 0)}, // TIM4_CH3
    {PD_15,      PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
    {PE_0,       PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM16, 1, 0)}, // TIM16_CH1
    {PE_1,       PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM17, 1, 0)}, // TIM17_CH1
    {PE_3,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
    {PE_4,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
    {PE_5,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
    {PE_6,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
    {PE_8,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 1, 1)}, // TIM1_CH1N
    {PE_9,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 1, 0)}, // TIM1_CH1
    {PE_10,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 2, 1)}, // TIM1_CH2N
    {PE_11,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 2, 0)}, // TIM1_CH2
    {PE_12,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 3, 1)}, // TIM1_CH3N
    {PE_13,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 3, 0)}, // TIM1_CH3
    {PE_14,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM1, 4, 0)}, // TIM1_CH4
    {PG_9,       PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM15, 1, 1)}, // TIM15_CH1N
    {PG_10,      PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM15, 1, 0)}, // TIM15_CH1
    {PG_11,      PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_TIM15, 2, 0)}, // TIM15_CH2
    {NC, NC, 0}
};

//*** SERIAL ***

MBED_WEAK const PinMap PinMap_UART_TX[] = {
    {PA_0,       UART_4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
    {PA_2,       UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PA_2_ALT0,  LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PA_9,       UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PB_6,       UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PB_10,      UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PB_11,      LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PC_1,       LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PC_4,       UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PC_10,      UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PC_10_ALT0, UART_4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
    {PC_12,      UART_5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART5)},
    {PD_5,       UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PD_8,       UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PG_7,       LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PG_9,       UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_UART_RX[] = {
    {PA_1,       UART_4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
    {PA_3,       UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PA_3_ALT0,  LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PA_10,      UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PA_15,      UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_USART2)},
    {PB_7,       UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PB_10,      LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PB_11,      UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PC_0,       LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PC_5,       UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PC_11,      UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PC_11_ALT0, UART_4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
    {PD_2,       UART_5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART5)},
    {PD_6,       UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PD_9,       UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PG_8,       LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PG_10,      UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_UART_RTS[] = {
    {PA_1,       UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PA_12,      UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PA_15,      UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PA_15_ALT0, UART_4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
    {PB_1,       UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PB_1_ALT0,  LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PB_3,       UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PB_4,       UART_5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART5)},
    {PB_12,      LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PB_14,      UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PD_2,       UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PD_4,       UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PD_12,      UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PG_6,       LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PG_12,      UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_UART_CTS[] = {
    {PA_0,       UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PA_6,       UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PA_6_ALT0,  LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PA_11,      UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PB_4,       UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PB_5,       UART_5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART5)},
    {PB_7,       UART_4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
    {PB_13,      UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PB_13_ALT0, LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PD_3,       UART_2,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PD_11,      UART_3,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PG_5,       LPUART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART1)},
    {PG_11,      UART_1,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {NC, NC, 0}
};

//*** SPI ***

MBED_WEAK const PinMap PinMap_SPI_MOSI[] = {
    {PA_7,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PA_12,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PB_5,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PB_5_ALT0,  SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PB_15,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PC_1,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_SPI2)},
    {PC_3,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PC_12,      SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PD_4,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PD_6,       SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI3)},
    {PE_15,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PG_4,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PG_11,      SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_SPI_MISO[] = {
    {PA_6,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PA_11,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PB_4,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PB_4_ALT0,  SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PB_14,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PC_2,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PC_11,      SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PD_3,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PE_14,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PG_3,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PG_10,      SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_SPI_SCLK[] = {
    {PA_1,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PA_5,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PA_9,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_SPI2)},
    {PB_3,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PB_3_ALT0,  SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PB_10,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PB_13,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PC_10,      SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PD_1,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PD_3,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF3_SPI2)},
    {PE_13,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PG_2,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PG_9,       SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_SPI_SSEL[] = {
    {PA_4,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PA_4_ALT0,  SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PA_15,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PA_15_ALT0, SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PB_0,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PB_9,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PB_12,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PD_0,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PE_12,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PG_5,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PG_12,      SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {NC, NC, 0}
};

//*** CAN ***

MBED_WEAK const PinMap PinMap_CAN_RD[] = {
    {PA_11,      CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
    {PB_8,       CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
    {PD_0,       CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_CAN_TD[] = {
    {PA_12,      CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
    {PB_9,       CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
    {PD_1,       CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
    {NC, NC, 0}
};

//*** QUADSPI ***

MBED_WEAK const PinMap PinMap_QSPI_DATA0[] = {
    {PB_1,      QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO0
    {PE_12,     QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO0
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_QSPI_DATA1[] = {
    {PB_0,      QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO1
    {PE_13,     QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO1
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_QSPI_DATA2[] = {
    {PA_7,      QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO2
    {PE_14,     QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO2
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_QSPI_DATA3[] = {
    {PA_6,      QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO3
    {PE_15,     QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO3
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_QSPI_SCLK[] = {
    {PA_3,      QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_CLK
    {PB_10,     QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_CLK
    {PE_10,     QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_CLK
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_QSPI_SSEL[] = {
    {PA_2,      QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_NCS
    {PA_4,      QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_OCTOSPI1)},  // OCTOSPI1_NCS
    {PB_11,     QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_NCS
    {PC_11,     QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_OCTOSPI1)},  // OCTOSPI1_NCS
    {PE_11,     QSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_NCS
    {NC, NC, 0}
};

//*** OCTOSPI ***

MBED_WEAK const PinMap PinMap_OSPI_DATA0[] = {
    {PB_1,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO0
    {PE_12,     OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO0
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_OSPI_DATA1[] = {
    {PB_0,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO1
    {PE_13,     OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO1
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_OSPI_DATA2[] = {
    {PA_7,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO2
    {PE_14,     OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO2
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_OSPI_DATA3[] = {
    {PA_6,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO3
    {PE_15,     OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO3
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_OSPI_DATA4[] = {
    {PC_1,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO4
    {PD_4,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO4
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_OSPI_DATA5[] = {
    {PC_2,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO5
    {PD_5,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO5
    {PG_11,     OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_OCTOSPI1)},  // OCTOSPI1_IO5
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_OSPI_DATA6[] = {
    {PC_3,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO6
    {PD_6,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO6
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_OSPI_DATA7[] = {
    {PC_0,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_OCTOSPI1)},  // OCTOSPI1_IO7
    {PC_4,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO7
    {PD_7,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_IO7
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_OSPI_DQS[] = {
    {PA_1,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_DQS
    {PB_2,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_DQS
    {PE_3,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_OCTOSPI1)},  // OCTOSPI1_DQS
    {PG_6,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_OCTOSPI1)},  // OCTOSPI1_DQS
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_OSPI_SCLK[] = {
    {PA_3,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_CLK
    {PB_10,     OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_CLK
    {PE_10,     OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_CLK
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_OSPI_SSEL[] = {
    {PA_2,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_NCS
    {PA_4,      OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_OCTOSPI1)},  // OCTOSPI1_NCS
    {PB_11,     OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_NCS
    {PC_11,     OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_OCTOSPI1)},  // OCTOSPI1_NCS
    {PE_11,     OSPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPI1)},  // OCTOSPI1_NCS
    {NC, NC, 0}
};

//*** USBDEVICE ***

MBED_WEAK const PinMap PinMap_USB_FS[] = {
    {PA_11,     USB_FS, STM_PIN_DATA(STM_MODE_INPUT, GPIO_NOPULL, GPIO_AF10_USB)}, // USB_DM
    {PA_12,     USB_FS, STM_PIN_DATA(STM_MODE_INPUT, GPIO_NOPULL, GPIO_AF10_USB)}, // USB_DP
//  {PA_13,     USB_FS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_USB)}, // USB_NOE
//  {PC_9,      USB_FS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_USB)}, // USB_NOE
    {NC, NC, 0}
};
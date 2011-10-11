/******************************************************************************
 *****************************************************************************/

/**
 * @file   solid_STM32.cpp
 * @author Justin.xu <support@soliddigi.com>
 * @brief  solid_STM32 Edition PIN_MAP and boardInit()
 */

#include "solid_STM32.h"

#ifdef BOARD_solid_STM32

void boardInit(void) {
}

extern const stm32_pin_info PIN_MAP[BOARD_NR_GPIO_PINS] = {

    /* Top header */

    {GPIOA, TIMER2, ADC1,  3, 4,    3}, /* D0/PA3 */
    {GPIOA, TIMER2, ADC1,  2, 3,    2}, /* D1/PA2 */
    {GPIOA, TIMER2, ADC1,  0, 1,    0}, /* D2/PA0 */
    {GPIOA, TIMER2, ADC1,  1, 2,    1}, /* D3/PA1 */
    {GPIOB,   NULL, NULL,  5, 0, ADCx}, /* D4/PB5 (LED)*/
    {GPIOB, TIMER4, NULL,  6, 1, ADCx}, /* D5/PB6 */
    {GPIOA, TIMER1, NULL,  8, 1, ADCx}, /* D6/PA8 */
    {GPIOA, TIMER1, NULL,  9, 2, ADCx}, /* D7/PA9 */
    {GPIOA, TIMER1, NULL, 10, 3, ADCx}, /* D8/PA10 */
    {GPIOB, TIMER4, NULL,  7, 2, ADCx}, /* D9/PB7 */
    {GPIOA,   NULL, ADC1,  4, 0,    4}, /* D10/PA4 */
    {GPIOA, TIMER3, ADC1,  7, 2,    7}, /* D11/PA7 */
    {GPIOA, TIMER3, ADC1,  6, 1,    6}, /* D12/PA6 */
    {GPIOA,   NULL, ADC1,  5, 0,    5}, /* D13/PA5  */
    {GPIOB, TIMER4, NULL,  8, 3, ADCx}, /* D14/PB8 */

    /* Little header */

    {GPIOC,   NULL, ADC1,  0, 0,   10}, /* D15/PC0 */
    {GPIOC,   NULL, ADC1,  1, 0,   11}, /* D16/PC1 */
    {GPIOC,   NULL, ADC1,  2, 0,   12}, /* D17/PC2 */
    {GPIOC,   NULL, ADC1,  3, 0,   13}, /* D18/PC3 */
    {GPIOC,   NULL, ADC1,  4, 0,   14}, /* D19/PC4 */
    {GPIOC,   NULL, ADC1,  5, 0,   15}, /* D20/PC5 */

    /* External header */

    {GPIOC,   NULL, NULL, 13, 0, ADCx}, /* D21/PC13 */
    {GPIOC,   NULL, NULL, 14, 0, ADCx}, /* D22/PC14 */
    {GPIOC,   NULL, NULL, 15, 0, ADCx}, /* D23/PC15 */
    {GPIOB, TIMER4, NULL,  9, 4, ADCx}, /* D24/PB9 */
    {GPIOD,   NULL, NULL,  2, 0, ADCx}, /* D25/PD2 */
    {GPIOC,   NULL, NULL, 10, 0, ADCx}, /* D26/PC10 */
    {GPIOB, TIMER3, ADC1,  0, 3,    8}, /* D27/PB0 */
    {GPIOB, TIMER3, ADC1,  1, 4,    9}, /* D28/PB1 */
    {GPIOB,   NULL, NULL, 10, 0, ADCx}, /* D29/PB10 */
    {GPIOB,   NULL, NULL, 11, 0, ADCx}, /* D30/PB11 */
    {GPIOB,   NULL, NULL, 12, 0, ADCx}, /* D31/PB12 */
    {GPIOB,   NULL, NULL, 13, 0, ADCx}, /* D32/PB13 */
    {GPIOB,   NULL, NULL, 14, 0, ADCx}, /* D33/PB14 */
    {GPIOB,   NULL, NULL, 15, 0, ADCx}, /* D34/PB15 (BUT) */
    {GPIOC, TIMER8, NULL,  6, 1, ADCx}, /* D35/PC6 */
    {GPIOC, TIMER8, NULL,  7, 2, ADCx}, /* D36/PC7 */
    {GPIOC, TIMER8, NULL,  8, 3, ADCx}, /* D37/PC8 */
    {GPIOC, TIMER8, NULL,  9, 4, ADCx}, /* D38/PC9 */

    /* JTAG header */

    {GPIOA,   NULL, NULL, 13, 0, ADCx}, /* D39/PA13 */
    {GPIOA,   NULL, NULL, 14, 0, ADCx}, /* D40/PA14 */
    {GPIOA,   NULL, NULL, 15, 0, ADCx}, /* D41/PA15 */
    {GPIOB,   NULL, NULL,  3, 0, ADCx}, /* D42/PB3  */
    {GPIOB,   NULL, NULL,  4, 0, ADCx}, /* D43/PB4  */

    /* USART 4 -RX  and  USART 5 -TX */

//    {GPIOC,   NULL, NULL, 11, 0, ADCx}, /* D44/PC11 */
//    {GPIOC,   NULL, NULL, 12, 0, ADCx}, /* D45/PC12 */

};

/* Note: Do NOT include pin 38 (TIM8_CH4), as that's BOARD_BUTTON_PIN
 * and thus not broken out to a header. */
extern const uint8 boardPWMPins[BOARD_NR_PWM_PINS] __FLASH__ = {
    0, 1, 2, 3, 5, 6, 7, 8, 9, 11, 12, 14, 24, 27, 28, 35, 36, 37
};

extern const uint8 boardADCPins[BOARD_NR_ADC_PINS] __FLASH__ = {
    0, 1, 2, 3, 10, 11, 12, 15, 16, 17, 18, 19, 20, 27, 28
};

extern const uint8 boardUsedPins[BOARD_NR_USED_PINS] __FLASH__ = {
    BOARD_LED_PIN, BOARD_BUTTON_PIN, BOARD_JTMS_SWDIO_PIN,
    BOARD_JTCK_SWCLK_PIN, BOARD_JTDI_PIN, BOARD_JTDO_PIN, BOARD_NJTRST_PIN
};

#endif

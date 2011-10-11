/******************************************************************************
 *****************************************************************************/

/**
 * @file   solid_STM32.h
 * @author Justin.xu <support@soliddigi.com>
 * @brief  Private include file for solid_STM32 Edition in boards.h
 *
 * See maple.h for more information on these definitions.
 */

#include "gpio.h"
#include "timer.h"

#include "wirish_types.h"

#ifndef _BOARDS_SOLID_STM32_H_
#define _BOARDS_SOLID_STM32_H_

/* A few of these values will seem strange given that it's a
 * high-density board. */

#define CYCLES_PER_MICROSECOND  72
#define SYSTICK_RELOAD_VAL      71999 /* takes a cycle to reload */

#define BOARD_BUTTON_PIN        34
#define BOARD_LED_PIN           4

/* Note: UART4 and UART5 have pins which aren't broken out :( */
#define BOARD_NR_USARTS         3
#define BOARD_USART1_TX_PIN     7
#define BOARD_USART1_RX_PIN     8
#define BOARD_USART2_TX_PIN     1
#define BOARD_USART2_RX_PIN     0
#define BOARD_USART3_TX_PIN     29
#define BOARD_USART3_RX_PIN     30
//ADD BY justin
//#define BOARD_USART4_TX_PIN     26
//#define BOARD_USART4_RX_PIN     44
//#define BOARD_USART5_TX_PIN     45
//#define BOARD_USART5_RX_PIN     25
/* Note:
 *
 * SPI3 is unusable due to pin 43 (PB4) and NRST tie-together :(, but
 * leave the definitions so as not to clutter things up.  This is only
 * OK since RET6 Ed. is specifically advertised as a beta board. */
#define BOARD_NR_SPI            2
#define BOARD_SPI1_NSS_PIN      10
#define BOARD_SPI1_MOSI_PIN     11
#define BOARD_SPI1_MISO_PIN     12
#define BOARD_SPI1_SCK_PIN      13
#define BOARD_SPI2_NSS_PIN      31
#define BOARD_SPI2_MOSI_PIN     34
#define BOARD_SPI2_MISO_PIN     33
#define BOARD_SPI2_SCK_PIN      32
#define BOARD_SPI3_NSS_PIN      41
#define BOARD_SPI3_MOSI_PIN     4
#define BOARD_SPI3_MISO_PIN     43
#define BOARD_SPI3_SCK_PIN      42

#define BOARD_NR_GPIO_PINS      44
//#define BOARD_NR_GPIO_PINS      46
/* Note: NOT 19. The missing one is D38 a.k.a. BOARD_BUTTON_PIN, which
 * isn't broken out to a header and is thus unusable for PWM. */
#define BOARD_NR_PWM_PINS       18
#define BOARD_NR_ADC_PINS       15
#define BOARD_NR_USED_PINS      7

#define BOARD_JTMS_SWDIO_PIN    39
#define BOARD_JTCK_SWCLK_PIN    40
#define BOARD_JTDI_PIN          41
#define BOARD_JTDO_PIN          42
#define BOARD_NJTRST_PIN        43

#endif

#ifndef DIO_CFG_H
#define DIO_CFG_H


#define HOW_MANY_CONFIGURED_CHANNELS    (3U)

#define HOW_MANY_CONFIGURED_PORTS       (1U)

#define HOW_MANY_CONFIGURED_GROUPS      (2U)

#define BUTTON_PORT_00_PIN_7            (0U)
#define LED_PORT_00_PIN_5               (1U)
#define LED_PORT_00_PIN_6               (2U)

#define PORT_00                         (0U)

#define CHANNEL_1                       (0U)
#define CHANNEL_2                       (1U)
#define CHANNEL_3                       (2U)

#define PORT_1                          (0U)

#define GROUP_1                         (0U)
#define GROUP_2                         (1U)


#define LED_PIN_5_LED_PIN_6_MASK        (0x00000060U)
#define LED_PIN_5_LED_PIN_6_OFFSET      (5U)

#define LED_PIN_5_LED_PIN_6_BUTTON_PIN_7_MASK           (0x000000E0U)
#define LED_PIN_5_LED_PIN_6_BUTTON_PIN_7_OFFSET         (5U)


#define PORT_00_ADDRESS                 (0xF003A000)


#define PXX_IN_OFFSET                   (0x00000024)
#define PXX_OMR_OFFSET                  (0x00000004)
#define PXX_OUT_OFFSET                  (0x00000000)
#define PXX_IOCR4_OFFSET                (0x00000014)

#define PIN_5                           (5U)
#define PIN_6                           (6U)
#define PIN_7                           (7U)


#endif /*DIO_CFG_H*/

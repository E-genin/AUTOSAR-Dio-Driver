



#include "Dio.h"










const Dio_ConfigObjectType Dio_Configuration =
{
    /*populate with information*/
    .Channels[CHANNEL_1].Channel_ID=PIN_7,
    .Channels[CHANNEL_1].Port_ID=PORT_00,

    .Channels[CHANNEL_2].Channel_ID=PIN_5,
    .Channels[CHANNEL_2].Port_ID=PORT_00,

    .Channels[CHANNEL_3].Channel_ID=PIN_6,
    .Channels[CHANNEL_3].Port_ID=PORT_00,

    .Ports[PORT_1]=PORT_00,

    .Groups[GROUP_1].mask = LED_PIN_5_LED_PIN_6_MASK,
    .Groups[GROUP_1].offset = LED_PIN_5_LED_PIN_6_OFFSET,
    .Groups[GROUP_1].port = PORT_00,

    .Groups[GROUP_2].mask = LED_PIN_5_LED_PIN_6_BUTTON_PIN_7_MASK,
    .Groups[GROUP_2].offset = LED_PIN_5_LED_PIN_6_BUTTON_PIN_7_OFFSET,
    .Groups[GROUP_2].port = PORT_00
};

/**/

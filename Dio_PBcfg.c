



#include "Dio.h"










const Dio_ConfigObjectType Dio_Configuration =
{
    /*populate with information*/
    .Channels[0].Channel_ID=PIN_7,
    .Channels[0].Port_ID=PORT_00,

    .Channels[1].Channel_ID=PIN_5,
    .Channels[1].Port_ID=PORT_00,

    .Ports[0]=PORT_00,

    .Groups[0].mask = 0,
    .Groups[0].offset = 0,
    .Groups[0].port = 0,

    .Groups[1].mask = 0,
    .Groups[1].offset = 0,
    .Groups[1].port = 0
};

/**/

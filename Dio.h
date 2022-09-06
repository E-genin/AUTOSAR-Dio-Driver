#ifndef DIO_H
#define DIO_H


#include "Std_Types.h"
#include "Dio_Cfg.h"





/*******************************Begin Type Definitions*****************************************/


typedef uint8 Dio_ChannelType; /* SWS_Dio_00182 Type definition for Dio_ChannelType used by the DIO APIs */


typedef uint8 Dio_PortType; /* SWS_Dio_00183 Type definition for Dio_PortType used by the DIO APIs */


typedef struct {
    uint32   mask;

    uint32   offset;

    Dio_PortType port;
} Dio_ChannelGroupType;  /* SWS_Dio_00184 Type definition for Dio_ChannelGroupType used by the DIO APIs */


typedef uint8 Dio_LevelType; /* SWS_Dio_00185 Type definition for Dio_LevelType used by the DIO APIs */

#define STD_LOW     (Dio_LevelType) 0x00
#define STD_HIGH    (Dio_LevelType) 0x01


typedef uint32 Dio_PortLevelType; /* SWS_Dio_00186 Type definition for Dio_PortLevelType used by the DIO APIs */

/*******************************End Type Definitions*******************************************/

/*******************************Begin Self Defined types*****************************************/

typedef struct Config_Channel
{
    Dio_ChannelType     Channel_ID;
    Dio_PortType        Port_ID;
}
Dio_ConfigChannel;



typedef struct Config_Object
{
    Dio_ConfigChannel       Channels[HOW_MANY_CONFIGURED_CHANNELS];
    Dio_PortType            Ports   [HOW_MANY_CONFIGURED_PORTS];
    Dio_ChannelGroupType    Groups  [HOW_MANY_CONFIGURED_GROUPS];
}
Dio_ConfigObjectType;

typedef uint32 PortAdressType;


/*******************************End Self Defined types********************************************/


/*******************************Begin Function Definitions (Prototypes)*****************************************/

Dio_LevelType Dio_ReadChannel( Dio_ChannelType ChannelId ); /*Function for DIO read Channel API */

void Dio_WriteChannel( Dio_ChannelType ChannelId, Dio_LevelType Level ); /*Function for DIO write Channel API */

Dio_PortLevelType Dio_ReadPort( Dio_PortType PortId ); /*Function for DIO read Port API */

void Dio_WritePort( Dio_PortType PortId, Dio_PortLevelType Level ); /*Function for DIO write Port API */

Dio_PortLevelType Dio_ReadChannelGroup( const Dio_ChannelGroupType* ChannelGroupIdPtr ); /*Function for DIO read Channel group API */

void Dio_WriteChannelGroup( const Dio_ChannelGroupType* ChannelGroupIdPtr, Dio_PortLevelType Level );   /*Function for DIO write Channel group API */

void Dio_GetVersionInfo( Std_VersionInfoType* VersionInfo ); /* Function for DIO Get Version Info API */

Dio_LevelType Dio_FlipChannel( Dio_ChannelType ChannelId);  /* Function for DIO Get Version Info API */


/*******************************End Function Definitions (Prototypes)*******************************************/


extern const Dio_ConfigObjectType Dio_Configuration;

#endif /*DIO_H*/



#include "Dio.h"
#include "Det.h"




Dio_LevelType Dio_ReadChannel( Dio_ChannelType ChannelId ) /*Function for DIO read Channel API */
{
    Dio_LevelType   ChannelLevel;
    PortAdressType  PortAddress;
    uint32          PortValue;
    uint32          PinValue;
    uint32          shift;


    shift = Dio_Configuration.Channels[ChannelId].Channel_ID;

    switch(Dio_Configuration.Channels[ChannelId].Port_ID)
    {
        case PORT_00 : { PortAddress = PORT_00_ADDRESS; break; }

        //case LED_PORT_00_PIN_5 :    { PortAddress = PORT_00_ADDRESS; break; }
    }

    PortValue =  HWREG(PortAddress + PXX_IN_OFFSET);
    PortValue &= (1U<<shift);
    PinValue =(PortValue>>shift);

    if(PinValue) ChannelLevel = STD_HIGH; else ChannelLevel = STD_LOW;

    return ChannelLevel;
}


void Dio_WriteChannel( Dio_ChannelType ChannelId, Dio_LevelType Level ) /*Function for DIO write Channel API */
{
    PortAdressType  PortAddress;
    uint32          LevelToWrite=0U;
    uint32          shift;


    shift = Dio_Configuration.Channels[ChannelId].Channel_ID;

    switch(Dio_Configuration.Channels[ChannelId].Port_ID)
    {
        case PORT_00 : {PortAddress = PORT_00_ADDRESS; break; }

        //case LED_PORT_00_PIN_5 :    {PortAddress = PORT_00_ADDRESS; break; }
    }

    if (Level==STD_HIGH)
    {
        LevelToWrite = 1U<<shift;
        HWREG(PortAddress + PXX_OMR_OFFSET) |= LevelToWrite;
    }

    else if (Level==STD_LOW)
    {
        LevelToWrite = ~(1U<<shift);
        HWREG(PortAddress + PXX_OMR_OFFSET) &= LevelToWrite;
    }

    else
    {

    }


}


Dio_PortLevelType Dio_ReadPort( Dio_PortType PortId ) /*Function for DIO read Port API */
{
    PortAdressType      PortAddress;
    Dio_PortLevelType   PortValue;


    //shift = Dio_Configuration.Ports[PortId].Channel_ID;

    switch(Dio_Configuration.Ports[PortId])
    {
        case PORT_00 : { PortAddress = PORT_00_ADDRESS; break; }

        //case LED_PORT_00_PIN_5 :    { PortAddress = PORT_00_ADDRESS; break; }
    }

    PortValue =  HWREG(PortAddress + PXX_IN_OFFSET);

    return PortValue;
}


void Dio_WritePort( Dio_PortType PortId, Dio_PortLevelType Level ) /*Function for DIO write Port API */
{
    PortAdressType      PortAddress;
    Dio_PortLevelType   PortValue;


    //shift = Dio_Configuration.Ports[PortId].Channel_ID;

    switch(Dio_Configuration.Ports[PortId])
    {
        case PORT_00 : { PortAddress = PORT_00_ADDRESS; break; }

        //case LED_PORT_00_PIN_5 :    { PortAddress = PORT_00_ADDRESS; break; }
    }

    HWREG(PortAddress + PXX_IN_OFFSET) = Level;
}


Dio_PortLevelType Dio_ReadChannelGroup( const Dio_ChannelGroupType* ChannelGroupIdPtr ) /*Function for DIO read Channel group API */
{
    PortAdressType      PortAddress;
    Dio_PortLevelType   PortValue;
    Dio_PortType        Associated_Port;

    uint32 offset, mask;

    Associated_Port     =   ChannelGroupIdPtr->port;
    mask                =   ChannelGroupIdPtr->mask;
    offset              =   ChannelGroupIdPtr->offset;

    switch(Associated_Port)
    {
        case PORT_00 : { PortAddress = PORT_00_ADDRESS; break; }

        //case LED_PORT_00_PIN_5 :    { PortAddress = PORT_00_ADDRESS; break; }
    }

    PortValue =  HWREG(PortAddress + PXX_IN_OFFSET);
    PortValue &= mask;
    PortValue >>= offset;


    return PortValue;
}


void Dio_WriteChannelGroup( const Dio_ChannelGroupType* ChannelGroupIdPtr, Dio_PortLevelType Level )    /*Function for DIO write Channel group API */
{
    PortAdressType      PortAddress;
    Dio_PortLevelType   PortValue =0u;
    Dio_PortType        Associated_Port;

    uint32 offset, mask;

    Associated_Port     =   ChannelGroupIdPtr->port;
    mask                =   ChannelGroupIdPtr->mask;
    offset              =   ChannelGroupIdPtr->offset;

    switch(Associated_Port)
    {
        case PORT_00 : { PortAddress = PORT_00_ADDRESS; break; }

        //case LED_PORT_00_PIN_5 :    { PortAddress = PORT_00_ADDRESS; break; }
    }

    HWREG(PortAddress + PXX_IN_OFFSET) &= ~(mask);
    HWREG(PortAddress + PXX_IN_OFFSET) |= (Level<<offset);

}


void Dio_GetVersionInfo( Std_VersionInfoType* VersionInfo ) /* Function for DIO Get Version Info API */
{

}


Dio_LevelType Dio_FlipChannel( Dio_ChannelType ChannelId)   /* Function for DIO Get Version Info API */
{
    Dio_LevelType Channel_Level = STD_LOW;

    Channel_Level = Dio_ReadChannel(ChannelId);

    if (STD_LOW==Channel_Level)
    {
        Dio_WriteChannel(ChannelId, STD_HIGH);
    }
    else if (STD_HIGH==Channel_Level)
    {
        Dio_WriteChannel(ChannelId, STD_LOW);
    }

    return (Channel_Level==STD_LOW?STD_HIGH:STD_LOW);
}

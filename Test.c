
/**********************************************************************************************************************
 * \file    Test.c
 * \brief
 * \version V1.0.0
 * \date    Sep 22, 2022
 * \author  zakar
 *********************************************************************************************************************/



/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*-------------------------------------------------Global variables--------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*--------------------------------------------Private Variables/Constants--------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*------------------------------------------------Function Prototypes------------------------------------------------*/
/*********************************************************************************************************************/

/*********************************************************************************************************************/
/*---------------------------------------------Function Implementations----------------------------------------------*/
/*********************************************************************************************************************/


#include "Dio.h"
#include "Test.h"

void Dio_Init_TC_1(void) /*setting the button pin 7 as input and the LED pin 5 as output*/
{
    uint32 Value_To_Write = 0x10008000; // 0b00010_000 0x00 0b10000_000 0x00

    HWREG(PORT_00_ADDRESS + PXX_IOCR4_OFFSET) = Value_To_Write;
}

void Dio_Init_TC_2(void) /*setting the button pin 7 as input, the LED pin 6 as output and the LED pin 5 as output*/
{
    uint32 Value_To_Write = 0x10808000; // 0b00010_000 0b10000_000 0b10000_000 0x00

    HWREG(PORT_00_ADDRESS + PXX_IOCR4_OFFSET) = Value_To_Write;
}


void Test_Case_1(void)
{
    Dio_Init_TC_1();

    while(1)
    {
        Dio_LevelType Temp_Value = STD_LOW;
        Temp_Value = Dio_ReadChannel(BUTTON_PORT_00_PIN_7);


        if (Temp_Value==STD_LOW)
        {
            Dio_WriteChannel(LED_PORT_00_PIN_5, STD_HIGH);
        }
        else if (Temp_Value==STD_HIGH)
        {
            Dio_WriteChannel(LED_PORT_00_PIN_5, STD_LOW);
        }
        else
        {

        }
    }
}

Dio_LevelType Random_Level_Generator(void)
{
    Dio_LevelType Random_Level;

    unsigned long long s = rand()/**/;

    Random_Level = s%2;

    return Random_Level;
}

void Test_Case_2(void)
{
    Dio_Init_TC_2();

    while(1)
    {
        Dio_LevelType LED_PORT_00_PIN_5_VALUE, LED_PORT_00_PIN_6_VALUE, BUTTON_PORT_00_PIN_7_VALUE;


        BUTTON_PORT_00_PIN_7_VALUE = Dio_ReadChannel(BUTTON_PORT_00_PIN_7);


        if (BUTTON_PORT_00_PIN_7_VALUE==STD_LOW)
        {
            for(uint32 i=0; i<0x11DFFFu; i++)  // debouncing
            {
                BUTTON_PORT_00_PIN_7_VALUE = Dio_ReadChannel(BUTTON_PORT_00_PIN_7);
            }


            BUTTON_PORT_00_PIN_7_VALUE = Dio_ReadChannel(BUTTON_PORT_00_PIN_7);

            if (BUTTON_PORT_00_PIN_7_VALUE==STD_LOW)
            {
                Dio_LevelType Level_to_write = Random_Level_Generator();
                Dio_WriteChannel(LED_PORT_00_PIN_5, Level_to_write);

                Level_to_write = Random_Level_Generator();
                Dio_WriteChannel(LED_PORT_00_PIN_6, Level_to_write);
                /**/
            }


        }
        else if (BUTTON_PORT_00_PIN_7_VALUE==STD_HIGH)
        {
            //Dio_WriteChannel(LED_PORT_00_PIN_5, STD_LOW);
        }
        else
        {

        }

        volatile Dio_PortLevelType PORT_00_VALUE = Dio_ReadPort(PORT_00);
        //printf("%X\n", PORT_00_VALUE);
    }
}


void Test_Case_3(void)
{
    Dio_Init_TC_2();

    while(1)
    {
        Dio_LevelType LED_PORT_00_PIN_5_VALUE, LED_PORT_00_PIN_6_VALUE, BUTTON_PORT_00_PIN_7_VALUE;


        BUTTON_PORT_00_PIN_7_VALUE = Dio_ReadChannel(BUTTON_PORT_00_PIN_7);


        if (BUTTON_PORT_00_PIN_7_VALUE==STD_LOW)
        {
            for(uint32 i=0; i<0x11DFFFu; i++)  // debouncing
            {
                BUTTON_PORT_00_PIN_7_VALUE = Dio_ReadChannel(BUTTON_PORT_00_PIN_7);
            }


            BUTTON_PORT_00_PIN_7_VALUE = Dio_ReadChannel(BUTTON_PORT_00_PIN_7);

            if (BUTTON_PORT_00_PIN_7_VALUE==STD_LOW)
            {
                Dio_LevelType pin_Level_to_write = Random_Level_Generator();
                Dio_PortLevelType port_level_to_write = pin_Level_to_write << PIN_5;

                pin_Level_to_write = Random_Level_Generator();
                port_level_to_write |= (pin_Level_to_write << PIN_6);

                Dio_WritePort(PORT_00, port_level_to_write);
                /**/
                volatile Dio_PortLevelType PORT_00_VALUE = Dio_ReadPort(PORT_00);
                //printf("%X\n", PORT_00_VALUE);
            }


        }
        else if (BUTTON_PORT_00_PIN_7_VALUE==STD_HIGH)
        {
            //Dio_WriteChannel(LED_PORT_00_PIN_5, STD_LOW);
        }
        else
        {

        }


    }
}

void Test_Case_4(void)
{
    Dio_Init_TC_2();

    while(1)
    {
        Dio_LevelType LED_PORT_00_PIN_5_VALUE, LED_PORT_00_PIN_6_VALUE, BUTTON_PORT_00_PIN_7_VALUE;


        BUTTON_PORT_00_PIN_7_VALUE = Dio_ReadChannel(BUTTON_PORT_00_PIN_7);


        if (BUTTON_PORT_00_PIN_7_VALUE==STD_LOW)
        {
            for(uint32 i=0; i<0x11DFFFu; i++)  // debouncing
            {
                BUTTON_PORT_00_PIN_7_VALUE = Dio_ReadChannel(BUTTON_PORT_00_PIN_7);
            }


            BUTTON_PORT_00_PIN_7_VALUE = Dio_ReadChannel(BUTTON_PORT_00_PIN_7);

            if (BUTTON_PORT_00_PIN_7_VALUE==STD_LOW)
            {
                Dio_LevelType pin_Level_to_write = Random_Level_Generator();
                Dio_PortLevelType port_level_to_write = pin_Level_to_write << 1U;

                pin_Level_to_write = Random_Level_Generator();
                port_level_to_write |= (pin_Level_to_write);

                Dio_WriteChannelGroup(&(Dio_Configuration.Groups[GROUP_1]), port_level_to_write);
                /**/
                volatile Dio_PortLevelType PORT_00_VALUE = Dio_ReadChannelGroup(&(Dio_Configuration.Groups[GROUP_1]));
                //printf("%X\n", PORT_00_VALUE);
            }


        }
        else if (BUTTON_PORT_00_PIN_7_VALUE==STD_HIGH)
        {
            //Dio_WriteChannel(LED_PORT_00_PIN_5, STD_LOW);
            volatile Dio_PortLevelType PORT_00_VALUE = Dio_ReadChannelGroup(&(Dio_Configuration.Groups[GROUP_2]));
        }
        else
        {

        }


    }
}

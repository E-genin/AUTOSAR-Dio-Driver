


#ifndef STD_TYPES_H  // avoid multiple header definitions
#define STD_TYPES_H



#include "Platform_Types.h"
#include "Compiler.h"


/*SWS_Dio_00131*/
typedef uint8 Std_ReturnType ;



/*AUTOSAR_SWS_StandardTypes*/
#define E_OK            (Std_ReturnType)0
#define E_NOT_OK        (Std_ReturnType)1




/*SWS_Dio_00131*/ /*AUTOSAR_SWS_StandardTypes*/

typedef struct{

    uint16      vendorID;
    uint16      moduleID;
    uint8       instanceID;
    uint8       sw_major_version;
    uint8       sw_minor_version;
    uint8       sw_patch_version;
} Std_VersionInfoType;





#endif

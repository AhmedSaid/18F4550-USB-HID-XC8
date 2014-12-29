/*********************************************************************
 *
 *              HID  Firmware
 *
 *********************************************************************
 * FileName:        lpcudk_14K50_hid.c
 * Dependencies:    See INCLUDES section below
 * Processor:       PIC18F14K50
 * Compiler:        C18 3.40+
 * Company:         HS-Ulm
 *
 * Author       Company     Date        Comment
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * VSK          HS-Ulm      29.09.10
 *                          02.10.13  
 *
 *		TODO
 *
 *		-	...
 *
 ******************************************************************************/

#include "system.h"

/** CONFIGURATION **************************************************/
        #pragma config CPUDIV = NOCLKDIV
        #pragma config USBDIV = OFF
        #pragma config FOSC   = HS
        #pragma config PLLEN  = ON
        #pragma config FCMEN  = OFF
        #pragma config IESO   = OFF
        #pragma config PWRTEN = OFF
        #pragma config BOREN  = OFF
        #pragma config BORV   = 30
        #pragma config WDTEN  = OFF
        #pragma config WDTPS  = 32768
  #if defined(__DEBUG)
        #pragma config MCLRE  = ON
  #else 
        #pragma config MCLRE  = OFF
  #endif
        #pragma config HFOFST = OFF
        #pragma config STVREN = ON
        #pragma config LVP    = OFF
        #pragma config XINST  = OFF
        #pragma config BBSIZ  = OFF
        #pragma config CP0    = OFF
        #pragma config CP1    = OFF
        #pragma config CPB    = OFF
        #pragma config WRT0   = OFF
        #pragma config WRT1   = OFF
        #pragma config WRTB   = OFF
        #pragma config WRTC   = OFF
        #pragma config EBTR0  = OFF
        #pragma config EBTR1  = OFF
        #pragma config EBTRB  = OFF       


/** VARIABLES ******************************************************/


/******************************************************************************
 * Function:        void initADC(void)
 *
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 *
 * Overview:        
 *
 * Note:
 *
 *****************************************************************************/
void initADC(void)
{
    OpenADC(ADC_FOSC_64 & ADC_RIGHT_JUST & ADC_2_TAD,
            ADC_CH10 & ADC_INT_OFF,
            ADC_REF_VDD_VSS & ADC_REF_VDD_VDD,
	    0b0000010000000000);
}


/** EOF lpcudk_14k50_hid.c *************************************************/

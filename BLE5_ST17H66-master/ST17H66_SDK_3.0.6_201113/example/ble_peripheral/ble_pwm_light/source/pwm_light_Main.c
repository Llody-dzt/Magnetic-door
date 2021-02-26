/**************************************************************************************************
THIS IS EMPTY HEADER
**************************************************************************************************/

/**************************************************************************************************
  Filename:       SimpleBLEPeripheral_Main.c
  Revised:        
  Revision:        

  Description:    This file contains the main and callback functions for
                  the Simple BLE Peripheral sample application.

 **************************************************************************************************/
#if (APP_CFG == 0)
/**************************************************************************************************
 *                                           Includes
 **************************************************************************************************/
/* Hal Drivers */

/* OSAL */
#include "OSAL.h"
#include "OSAL_Tasks.h"
#include "OSAL_PwrMgr.h"
#include "osal_snv.h"
//#include "OnBoard.h"


/**************************************************************************************************
 * FUNCTIONS
 **************************************************************************************************/


/**************************************************************************************************
 * @fn          main
 *
 * @brief       Start of application.
 *
 * @param       none
 *
 * @return      none
 **************************************************************************************************
 */
int app_main(void)
{

  /* Initialize the operating system */
  osal_init_system();

  osal_pwrmgr_device( PWRMGR_BATTERY );

  /* Start OSAL */
  osal_start_system(); // No Return from here

  return 0;
}
#endif
/**************************************************************************************************
                                           CALL-BACKS
**************************************************************************************************/


/*************************************************************************************************
**************************************************************************************************/

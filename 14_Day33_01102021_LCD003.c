/*
===============================================================================
 Name        : 14_Day33_01102021_LCD003.c

 Description : LCD Printf implementation

 
 Layered Architecture used for this project
 ************************************
 Application layer-14_Day33_01102021_LCD003.c
 ************************************
 Board layer - lcd.c/.h, configboard.h
 ************************************
 Low level drivers or chip level - gpio.c/.h
 ************************************
 Hardware
 ************************************

===============================================================================
*/

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
/* Private includes ----------------------------------------------------------*/
#include "lcd.h"

/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/**
  * @brief  Initialize all the hardware connected
  * @retval none
  */
void vAppHardwareInit(void)
{

	vLCDInitialize();
	vLCDInitialCommands();

}

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  char str="Num";
  uint16_t num1=1234;
  int16_t  num2=-43;
  /* MCU Configuration--------------------------------------------------------*/

  /* Initialize all configured peripherals */
   vAppHardwareInit();
   vLCDPrintf("%s=%o %d %x",str,num1,num1,num1);
   vLCDGotoxy(LINE1,COL0);
   vLCDPrintf("num2=%d %b",num2,num1);

   /* TODO call the vLCDPrintf to check the %f condition */


  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)  // for(;;)
  {


  }
  /* End of Application entry point */
}





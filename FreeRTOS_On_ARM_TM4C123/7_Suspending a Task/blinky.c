//*****************************************************************************
//
// blinky.c - Simple example to blink the on-board LED.
//
// Copyright (c) 2012-2017 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.4.178 of the EK-TM4C123GXL Firmware Package.
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "FreeRTOS.h"                   // ARM.FreeRTOS::RTOS:Core
#include "task.h"                       // ARM.FreeRTOS::RTOS:Core

//*****************************************************************************
//
//! \addtogroup example_list
//! <h1>Blinky (blinky)</h1>
//!
//! A very simple example that blinks the on-board LED using direct register
//! access.
//
//*****************************************************************************

//*****************************************************************************
//
// The error routine that is called if the driver library encounters an error.
//
//*****************************************************************************
#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
    while(1);
}
#endif

//*****************************************************************************
//
// Task Handlers Prototypes:
//
//*****************************************************************************
void vBlueLedControllerTask(void *pvParamters);
void vRedLedControllerTask(void *pvParamters);
void vGreenLedControllerTask(void *pvParamters);

// Task Handling Blocks:
TaskHandle_t blue_Handle, red_Handle, green_Handle;
uint32_t suspendMonitor = 0;
uint8_t task_created;
//*****************************************************************************
//
// Blink the on-board LED.
//
//*****************************************************************************
int main(void)
{
		volatile uint32_t ui32Loop;
    //
    // Enable the GPIO port that is used for the on-board LED.
    //
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    //
    // Check if the peripheral access is enabled.
    //
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {
    }
		

    //
    // Enable the GPIO pin for the LED (PF3).  Set the direction as output, and
    // enable the GPIO pin for digital function.
    //
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_3); // GREEN LED
		GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2); // BLUE LED
		GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1); // RED LED
		
		task_created = xTaskCreate(vGreenLedControllerTask,
								"Green Led Controller",
								10,
								NULL,
								2,
								&green_Handle);
		if (task_created == 1)
		{
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, GPIO_PIN_3);
      for(ui32Loop = 0; ui32Loop < 10000000 ; ui32Loop++)
      {
      }
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0);
		}
		xTaskCreate(vBlueLedControllerTask,
								"Blue Led Controller",
								10,
								NULL,
								1,
								&blue_Handle);
		if (task_created == 1)
		{
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2);
      for(ui32Loop = 0; ui32Loop < 10000000 ; ui32Loop++)
      {
      }
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0);
		}
		
		xTaskCreate(vRedLedControllerTask,
								"Red Led Controller",
								10,
								NULL,
								1,
								&red_Handle);
		if (task_created == 1)
		{
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1);
      for(ui32Loop = 0; ui32Loop < 10000000 ; ui32Loop++)
      {
      }
			GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0);
			for(ui32Loop = 0; ui32Loop < 10000000 ; ui32Loop++)
      {
      }
		}
		
		vTaskStartScheduler();

    //
    // Loop forever.
    //
    while(1)
    {
    }
}

void vGreenLedControllerTask(void *pvParamters)
{
	 volatile uint32_t ui32Loop;
	 volatile uint32_t pinValue;
	 
	 pinValue = GPIO_PIN_3;
	 while(1)
	 {
		 //
        // Turn on the LED.
        //
		 
				GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, pinValue);
				pinValue = ~pinValue;
				
        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 1000000 ; ui32Loop++)
        {
        }
				suspendMonitor++;
				if (suspendMonitor >= 20)
				{
					GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0);
					suspendMonitor = 0;
					vTaskSuspend(green_Handle);
				}
	 }
}

void vBlueLedControllerTask(void *pvParamters)
{
	 volatile uint32_t ui32Loop;
	 volatile uint32_t pinValue;
	 
	 pinValue = GPIO_PIN_2;
	 while(1)
	 {
		 //
        // Turn on the LED.
        //
		 
				GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, pinValue);
				pinValue = ~pinValue;
				
        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 1000000 ; ui32Loop++)
        {
        }
				suspendMonitor++;
				if (suspendMonitor >= 20)
				{
					GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0);
					suspendMonitor = 0;
					vTaskSuspend(blue_Handle);
				}
	 }
}

void vRedLedControllerTask(void *pvParamters)
{
	 volatile uint32_t ui32Loop;
	 volatile uint32_t pinValue;
	 
	 pinValue = GPIO_PIN_1;
	 while(1)
	 {
		 //
        // Turn on the LED.
        //
		 
				GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, pinValue);
				pinValue = ~pinValue;
				
        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < 1000000 ; ui32Loop++)
        {
        }
				suspendMonitor++;
				if (suspendMonitor >= 20)
				{
					GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0);
					suspendMonitor = 0;
					vTaskSuspend(red_Handle);
				}
	 }
}
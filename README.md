# Embedded-System
This repository contains my coding implementations for Udemy based Embedded Systems and RTOS courses, that I have taken.<br/>**Development Board used:** EK-TM4C123GXL based on TM4C123GH6PM MCU (Texas Instruments).

Performing a range of coding projects, key skills that I learnt:<br/>
- Low-level device drivers development (bare-metal), to interface on-chip peripherals with various external I/O hardware (sensors/actuators)<br/>
-	Compiler intrinsics, assembly code optimization and exploiting NVIC features for low-interrupt latency<br/>
-	Hardware/software debugging, concept of Finite State Machine (FSM) and embedded software development process<br/>
-	Board Support Package (BSP) and Application development in embedded OS environments (FreeRTOS especially)<br/>
-	Overview of the features of various market leading embedded OS (Micrium  µC/OS-III, CMSIS RTOS RTX, FreeRTOS)<br/>
-	Understanding with the internals of an OS kernel, thread-scheduling schemes and OS porting considerations to other MCUs in ARM product family<br/>

These dedicated courses have also provided me a comprehensive understanding of IDE/Compiler Toolchains, ARM design philosophy, programmer's model & firmware development principles in ARM's ecosystem along with internal features of the Cortex-M/A that support embedded OS deployment. This exercise provided me experience in navigating through architecture/technical reference manuals, generic user guides, device data Sheets, and schematics professionally. This helped me learn the algorithmic approaches in resolving a challenge to get an embedded project up & running or alternatively, debug one.<br/>

---------------------------------------------------------------------------------
 
#### **~\Cortex-M Bare-Metal<br/>** 
Contains implementations for the course: **[Complete ARM Cortex-M Bare-Metal Programming Ground Up™](https://www.udemy.com/course/cortex-m-internals-master-pointers-structures-memory-etc/)**

This course teaches Cortex-M Internals, Pointers, Structures, Memory Navigation, Debugging, CMSIS,Assembly etc and how to navigate the microntroller reference manual and datasheet to extract the right  information to professionally  build peripheral drivers (ADC, UART, GPIO, TIMER etc.) and firmware. To achieve this goal, no libraries are used in this course, purely ARM Assembly Language and bare-metal embedded C.

---------------------------------------------------------------------------------
#### **~\FreeRTOS_On_ARM_TM4C123<br/>**
Contains implementations for the course: **[FreeRTOS From Ground Up™ on ARM Processors](https://www.udemy.com/course/freertos-on-arm-processors/)**

This course teaches the foundations of real-time systems and how to build real-time applications using FreeRTOS ,one of the most popular real-time operating systems  for embedded systems.  The course gives a detailed overview of the characteristics of the FreeRTOS real-time kernel,  provides a detailed tutorial on the APIs to implement the various features of FreeRTOS  and then goes on to build about 50 real-time projects.

---------------------------------------------------------------------------------

#### **~\Ground-up RTOS on ARM_1<br/>**
Contains implementations for the course: **[Build Your Own RealTime OS (RTOS) From Ground Up™ on ARM 1](https://www.udemy.com/course/rtos-building-from-ground-up-on-arm-processors/)**

This course teaches how to build a Real-Time Operating System from scratch, building up basic a real-time kernel and a scheduler from scratch, along with coding implementation. It starts by getting you excited through an introduction to the internals of a Real-Time Kernel on ARM Processors, which you implement yourself in code.Then we move on to learn all there  is about Real-Time Operating Systems, their various parts, how they work and then we finally build our own Real-Time Operating System exploring different scheduling algorithms, task signaling, synchronization and inter-thread communication tools.

---------------------------------------------------------------------------------

#### **~\Ground-up RTOS on ARM_2 (Advanced Concepts)<br/>**

Contains implementations for the course: **[Build Your Own RealTime OS (RTOS) From Ground Up™ on ARM 2](https://www.udemy.com/course/build-your-own-realtime-os-rtos-from-ground-uptm-on-arm-2/)**

This course teaches how to build a Real-Time Operating Systems through intensive practice and theory. It starts by getting you excited through an introduction to the internals of a Real-Time Kernel on ARM Processors, which you shall implement yourself in code.Then we move on to learn all there  is about Real-Time Operating Systems, their various parts, how they work and then we finally build our own Real-Time Operating System exploring different scheduling algorithms and Inter-Thread communication tools.

---------------------------------------------------------------------------------

**Important Note:**<br/>
At the time of initializing this README.md file, the author of these above mentioned courese; Israel Gbati (https://www.udemy.com/user/israel-gbati-2/) is going through some re-orientation on Udemy to launch his own separate eLearning platform for Embedded Systems (at www.cortex-m.com). Therefore, direct access to the details of these course might be temporarily unavailble. However, those who had purchased them already (as I do), have lifetime full access. In case, interested to see section-wise details of the courses, please ask me and I'll share access.

---------------------------------------------------------------------------------
### Documentation & Reference Resources used:

| Source | Description |
| --- | --- |
**System-on-Chip Design with Arm® Cortex®-M Processors: Reference Book**</br>By: Joseph Yiu, Distinguished Arm Engineer</br>ISBN – 978-1-911531-18-0 | [<img src="https://www.arm.com/-/media/global/resources/education/textbooks/soc-reference-book/System-on-Chip%20Design%20with%20Arm%20Cortex-M%20Processors%20-%20front%20cover%20web.jpg?revision=e99db918-b5b2-4426-bcda-d056de78ee46&h=780&w=600&la=en&hash=BF2D17937E13DAC139628F480B3F07D9D00C047D" width="250"/>](https://www.arm.com/resources/education/books/soc-reference-book)
**ARM® Cortex® M4 Cookbook**</br>Mark Fisher | [<img src="https://www.packtpub.com/media/catalog/product/cache/c2dd93b9130e9fabaf187d1326a880fc/6/5/6503ot_0001_arm20cortex20m420cookbook.jpg" width="250"/>](https://www.packtpub.com/hardware-and-creative/arm-cortex-m4-cookbook)

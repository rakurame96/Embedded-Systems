## GPTM Periodic Implementation</br>
This exercise introduces General Purpopose Timers (GPTM peripheral) on Tiva C Lanuchpad (TM4C123GH6PM) and uses a 16-bit Timer0 A configured as **Periodic timer** with TM4C core running at 16MHz, incrementing a count variable, with value in milli-seconds passed as argument to the function Timer_1_Oneshot(int milli_seconds) and polling over bit-1 of TIMER0 RIs(Raw Interrupt Status) Register.
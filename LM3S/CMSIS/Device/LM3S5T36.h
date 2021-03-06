
/****************************************************************************************************//**
 * @file     LM3S5T36.h
 *
 * @brief    CMSIS Cortex-M3 Core Peripheral Access Layer Header File for
 *           default LM3S5T36 Device Series
 *
 * @version  V8636
 * @date     15. February 2012
 *
 * @note     Generated with SVDConv V2.73b  on Wednesday, 15.02.2012 18:04:14
 *           from CMSIS SVD File 'lm3s5t36.svd.xml' Version 8636,
 *           created on Thursday, 16.02.2012 00:04:13, last modified on Thursday, 16.02.2012 00:04:13
 *******************************************************************************************************/



/** @addtogroup TI
  * @{
  */

/** @addtogroup LM3S5T36
  * @{
  */

#ifndef LM3S5T36_H
#define LM3S5T36_H

#ifdef __cplusplus
extern "C" {
#endif


/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum {
/* -------------------  Cortex-M3 Processor Exceptions Numbers  ------------------- */
  Reset_IRQn                    = -15,              /*!<   1  Reset Vector, invoked on Power up and warm reset                 */
  NonMaskableInt_IRQn           = -14,              /*!<   2  Non maskable Interrupt, cannot be stopped or preempted           */
  HardFault_IRQn                = -13,              /*!<   3  Hard Fault, all classes of Fault                                 */
  MemoryManagement_IRQn         = -12,              /*!<   4  Memory Management, MPU mismatch, including Access Violation
                                                         and No Match                                                          */
  BusFault_IRQn                 = -11,              /*!<   5  Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory
                                                         related Fault                                                         */
  UsageFault_IRQn               = -10,              /*!<   6  Usage Fault, i.e. Undef Instruction, Illegal State Transition    */
  SVCall_IRQn                   =  -5,              /*!<  11  System Service Call via SVC instruction                          */
  DebugMonitor_IRQn             =  -4,              /*!<  12  Debug Monitor                                                    */
  PendSV_IRQn                   =  -2,              /*!<  14  Pendable request for system service                              */
  SysTick_IRQn                  =  -1,              /*!<  15  System Tick Timer                                                */
/* ---------------------  LM3S5T36 Specific Interrupt Numbers  -------------------- */
  GPIOA_IRQn                    =   0,              /*!<   0  GPIOA                                                            */
  GPIOB_IRQn                    =   1,              /*!<   1  GPIOB                                                            */
  GPIOC_IRQn                    =   2,              /*!<   2  GPIOC                                                            */
  GPIOD_IRQn                    =   3,              /*!<   3  GPIOD                                                            */
  GPIOE_IRQn                    =   4,              /*!<   4  GPIOE                                                            */
  UART0_IRQn                    =   5,              /*!<   5  UART0                                                            */
  UART1_IRQn                    =   6,              /*!<   6  UART1                                                            */
  SSI0_IRQn                     =   7,              /*!<   7  SSI0                                                             */
  I2C0_IRQn                     =   8,              /*!<   8  I2C0                                                             */
  PWM0_FAULT_IRQn               =   9,              /*!<   9  PWM0_FAULT                                                       */
  PWM0_0_IRQn                   =  10,              /*!<  10  PWM0_0                                                           */
  PWM0_1_IRQn                   =  11,              /*!<  11  PWM0_1                                                           */
  PWM0_2_IRQn                   =  12,              /*!<  12  PWM0_2                                                           */
  QEI0_IRQn                     =  13,              /*!<  13  QEI0                                                             */
  ADC0SS0_IRQn                  =  14,              /*!<  14  ADC0SS0                                                          */
  ADC0SS1_IRQn                  =  15,              /*!<  15  ADC0SS1                                                          */
  ADC0SS2_IRQn                  =  16,              /*!<  16  ADC0SS2                                                          */
  ADC0SS3_IRQn                  =  17,              /*!<  17  ADC0SS3                                                          */
  WATCHDOG0_IRQn                =  18,              /*!<  18  WATCHDOG0                                                        */
  TIMER0A_IRQn                  =  19,              /*!<  19  TIMER0A                                                          */
  TIMER0B_IRQn                  =  20,              /*!<  20  TIMER0B                                                          */
  TIMER1A_IRQn                  =  21,              /*!<  21  TIMER1A                                                          */
  TIMER1B_IRQn                  =  22,              /*!<  22  TIMER1B                                                          */
  TIMER2A_IRQn                  =  23,              /*!<  23  TIMER2A                                                          */
  TIMER2B_IRQn                  =  24,              /*!<  24  TIMER2B                                                          */
  COMP0_IRQn                    =  25,              /*!<  25  COMP0                                                            */
  COMP1_IRQn                    =  26,              /*!<  26  COMP1                                                            */
  COMP2_IRQn                    =  27,              /*!<  27  COMP2                                                            */
  SYSCTL_IRQn                   =  28,              /*!<  28  SYSCTL                                                           */
  FLASH_CTRL_IRQn               =  29,              /*!<  29  FLASH_CTRL                                                       */
  UART2_IRQn                    =  33,              /*!<  33  UART2                                                            */
  SSI1_IRQn                     =  34,              /*!<  34  SSI1                                                             */
  I2C1_IRQn                     =  37,              /*!<  37  I2C1                                                             */
  CAN0_IRQn                     =  39,              /*!<  39  CAN0                                                             */
  HIB_IRQn                      =  43,              /*!<  43  HIB                                                              */
  USB0_IRQn                     =  44,              /*!<  44  USB0                                                             */
  PWM0_3_IRQn                   =  45,              /*!<  45  PWM0_3                                                           */
  UDMA_IRQn                     =  46,              /*!<  46  UDMA                                                             */
  UDMAERR_IRQn                  =  47,              /*!<  47  UDMAERR                                                          */
  ADC1SS0_IRQn                  =  48,              /*!<  48  ADC1SS0                                                          */
  ADC1SS1_IRQn                  =  49,              /*!<  49  ADC1SS1                                                          */
  ADC1SS2_IRQn                  =  50,              /*!<  50  ADC1SS2                                                          */
  ADC1SS3_IRQn                  =  51               /*!<  51  ADC1SS3                                                          */
} IRQn_Type;


/** @addtogroup Configuration_of_CMSIS
  * @{
  */


/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* ----------------Configuration of the Cortex-M3 Processor and Core Peripherals---------------- */
#define __CM3_REV                 0x0401            /*!< Cortex-M3 Core Revision                                               */
#define __MPU_PRESENT                  1            /*!< MPU present or not                                                    */
#define __NVIC_PRIO_BITS               3            /*!< Number of Bits used for Priority Levels                               */
#define __Vendor_SysTickConfig         0            /*!< Set to 1 if different SysTick Config is used                          */
/** @} */ /* End of group Configuration_of_CMSIS */

#include <core_cm3.h>                               /*!< Cortex-M3 processor and core peripherals                              */
#include "system_LM3S.h"                            /*!< LM3S5T36 System                                                       */


/* ================================================================================ */
/* ================       Device Specific Peripheral Section       ================ */
/* ================================================================================ */


/** @addtogroup Device_Peripheral_Registers
  * @{
  */


/* -------------------  Start of section using anonymous unions  ------------------ */
#if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined(__ICCARM__)
  #pragma language=extended
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning 586
#else
  #warning Not supported compiler type
#endif



/* ================================================================================ */
/* ================                    WATCHDOG0                   ================ */
/* ================================================================================ */


/**
  * @brief Register map for WATCHDOG0 peripheral (WATCHDOG0)
  */

typedef struct {                                    /*!< WATCHDOG0 Structure                                                   */
  __IO uint32_t  LOAD;                              /*!< Watchdog Load                                                         */
  __IO uint32_t  VALUE;                             /*!< Watchdog Value                                                        */
  __IO uint32_t  CTL;                               /*!< Watchdog Control                                                      */
  __O  uint32_t  ICR;                               /*!< Watchdog Interrupt Clear                                              */
  __IO uint32_t  RIS;                               /*!< Watchdog Raw Interrupt Status                                         */
  __IO uint32_t  MIS;                               /*!< Watchdog Masked Interrupt Status                                      */
  __I  uint32_t  RESERVED0[256];
  __IO uint32_t  TEST;                              /*!< Watchdog Test                                                         */
  __I  uint32_t  RESERVED1[505];
  __IO uint32_t  LOCK;                              /*!< Watchdog Lock                                                         */
} WATCHDOG0_Type;


/* ================================================================================ */
/* ================                      GPIOA                     ================ */
/* ================================================================================ */


/**
  * @brief Register map for GPIOA peripheral (GPIOA)
  */

typedef struct {                                    /*!< GPIOA Structure                                                       */
  __I  uint32_t  RESERVED0[255];
  __IO uint32_t  DATA;                              /*!< GPIO Data                                                             */
  __IO uint32_t  DIR;                               /*!< GPIO Direction                                                        */
  __IO uint32_t  IS;                                /*!< GPIO Interrupt Sense                                                  */
  __IO uint32_t  IBE;                               /*!< GPIO Interrupt Both Edges                                             */
  __IO uint32_t  IEV;                               /*!< GPIO Interrupt Event                                                  */
  __IO uint32_t  IM;                                /*!< GPIO Interrupt Mask                                                   */
  __IO uint32_t  RIS;                               /*!< GPIO Raw Interrupt Status                                             */
  __IO uint32_t  MIS;                               /*!< GPIO Masked Interrupt Status                                          */
  __O  uint32_t  ICR;                               /*!< GPIO Interrupt Clear                                                  */
  __IO uint32_t  AFSEL;                             /*!< GPIO Alternate Function Select                                        */
  __I  uint32_t  RESERVED1[55];
  __IO uint32_t  DR2R;                              /*!< GPIO 2-mA Drive Select                                                */
  __IO uint32_t  DR4R;                              /*!< GPIO 4-mA Drive Select                                                */
  __IO uint32_t  DR8R;                              /*!< GPIO 8-mA Drive Select                                                */
  __IO uint32_t  ODR;                               /*!< GPIO Open Drain Select                                                */
  __IO uint32_t  PUR;                               /*!< GPIO Pull-Up Select                                                   */
  __IO uint32_t  PDR;                               /*!< GPIO Pull-Down Select                                                 */
  __IO uint32_t  SLR;                               /*!< GPIO Slew Rate Control Select                                         */
  __IO uint32_t  DEN;                               /*!< GPIO Digital Enable                                                   */
  __IO uint32_t  LOCK;                              /*!< GPIO Lock                                                             */
  __I  uint32_t  CR;                                /*!< GPIO Commit                                                           */
  __IO uint32_t  AMSEL;                             /*!< GPIO Analog Mode Select                                               */
  __IO uint32_t  PCTL;                              /*!< GPIO Port Control                                                     */
} GPIOA_Type;


/* ================================================================================ */
/* ================                      SSI0                      ================ */
/* ================================================================================ */


/**
  * @brief Register map for SSI0 peripheral (SSI0)
  */

typedef struct {                                    /*!< SSI0 Structure                                                        */
  __IO uint32_t  CR0;                               /*!< SSI Control 0                                                         */
  __IO uint32_t  CR1;                               /*!< SSI Control 1                                                         */
  __IO uint32_t  DR;                                /*!< SSI Data                                                              */
  __IO uint32_t  SR;                                /*!< SSI Status                                                            */
  __IO uint32_t  CPSR;                              /*!< SSI Clock Prescale                                                    */
  __IO uint32_t  IM;                                /*!< SSI Interrupt Mask                                                    */
  __IO uint32_t  RIS;                               /*!< SSI Raw Interrupt Status                                              */
  __IO uint32_t  MIS;                               /*!< SSI Masked Interrupt Status                                           */
  __O  uint32_t  ICR;                               /*!< SSI Interrupt Clear                                                   */
  __IO uint32_t  DMACTL;                            /*!< SSI DMA Control                                                       */
} SSI0_Type;


/* ================================================================================ */
/* ================                      UART0                     ================ */
/* ================================================================================ */


/**
  * @brief Register map for UART0 peripheral (UART0)
  */

typedef struct {                                    /*!< UART0 Structure                                                       */
  __IO uint32_t  DR;                                /*!< UART Data                                                             */
  
  union {
    __IO uint32_t  UART_ALT_ECR;                    /*!< UART Receive Status/Error Clear                                       */
    __IO uint32_t  RSR;                             /*!< UART Receive Status/Error Clear                                       */
  } ;
  __I  uint32_t  RESERVED0[4];
  __IO uint32_t  FR;                                /*!< UART Flag                                                             */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  ILPR;                              /*!< UART IrDA Low-Power Register                                          */
  __IO uint32_t  IBRD;                              /*!< UART Integer Baud-Rate Divisor                                        */
  __IO uint32_t  FBRD;                              /*!< UART Fractional Baud-Rate Divisor                                     */
  __IO uint32_t  LCRH;                              /*!< UART Line Control                                                     */
  __IO uint32_t  CTL;                               /*!< UART Control                                                          */
  __IO uint32_t  IFLS;                              /*!< UART Interrupt FIFO Level Select                                      */
  __IO uint32_t  IM;                                /*!< UART Interrupt Mask                                                   */
  __IO uint32_t  RIS;                               /*!< UART Raw Interrupt Status                                             */
  __IO uint32_t  MIS;                               /*!< UART Masked Interrupt Status                                          */
  __O  uint32_t  ICR;                               /*!< UART Interrupt Clear                                                  */
  __IO uint32_t  DMACTL;                            /*!< UART DMA Control                                                      */
  __I  uint32_t  RESERVED2[17];
  __IO uint32_t  LCTL;                              /*!< UART LIN Control                                                      */
  __IO uint32_t  LSS;                               /*!< UART LIN Snap Shot                                                    */
  __IO uint32_t  LTIM;                              /*!< UART LIN Timer                                                        */
} UART0_Type;


/* ================================================================================ */
/* ================                      I2C0                      ================ */
/* ================================================================================ */


/**
  * @brief Register map for I2C0 peripheral (I2C0)
  */

typedef struct {                                    /*!< I2C0 Structure                                                        */
  __IO uint32_t  MSA;                               /*!< I2C Master Slave Address                                              */
  
  union {
    __IO uint32_t  I2C0_ALT_MCS;                    /*!< I2C Master Control/Status                                             */
    __IO uint32_t  MCS;                             /*!< I2C Master Control/Status                                             */
  } ;
  __IO uint32_t  MDR;                               /*!< I2C Master Data                                                       */
  __IO uint32_t  MTPR;                              /*!< I2C Master Timer Period                                               */
  __IO uint32_t  MIMR;                              /*!< I2C Master Interrupt Mask                                             */
  __IO uint32_t  MRIS;                              /*!< I2C Master Raw Interrupt Status                                       */
  __IO uint32_t  MMIS;                              /*!< I2C Master Masked Interrupt Status                                    */
  __O  uint32_t  MICR;                              /*!< I2C Master Interrupt Clear                                            */
  __IO uint32_t  MCR;                               /*!< I2C Master Configuration                                              */
  __I  uint32_t  RESERVED0[503];
  __IO uint32_t  SOAR;                              /*!< I2C Slave Own Address                                                 */
  
  union {
    __IO uint32_t  I2C0_ALT_SCSR;                   /*!< I2C Slave Control/Status                                              */
    __IO uint32_t  SCSR;                            /*!< I2C Slave Control/Status                                              */
  } ;
  __IO uint32_t  SDR;                               /*!< I2C Slave Data                                                        */
  __IO uint32_t  SIMR;                              /*!< I2C Slave Interrupt Mask                                              */
  __IO uint32_t  SRIS;                              /*!< I2C Slave Raw Interrupt Status                                        */
  __IO uint32_t  SMIS;                              /*!< I2C Slave Masked Interrupt Status                                     */
  __O  uint32_t  SICR;                              /*!< I2C Slave Interrupt Clear                                             */
} I2C0_Type;


/* ================================================================================ */
/* ================                      PWM0                      ================ */
/* ================================================================================ */


/**
  * @brief Register map for PWM0 peripheral (PWM0)
  */

typedef struct {                                    /*!< PWM0 Structure                                                        */
  __IO uint32_t  CTL;                               /*!< PWM Master Control                                                    */
  __IO uint32_t  SYNC;                              /*!< PWM Time Base Sync                                                    */
  __IO uint32_t  ENABLE;                            /*!< PWM Output Enable                                                     */
  __IO uint32_t  INVERT;                            /*!< PWM Output Inversion                                                  */
  __IO uint32_t  FAULT;                             /*!< PWM Output Fault                                                      */
  __IO uint32_t  INTEN;                             /*!< PWM Interrupt Enable                                                  */
  __IO uint32_t  RIS;                               /*!< PWM Raw Interrupt Status                                              */
  __IO uint32_t  ISC;                               /*!< PWM Interrupt Status and Clear                                        */
  __IO uint32_t  STATUS;                            /*!< PWM Status                                                            */
  __IO uint32_t  FAULTVAL;                          /*!< PWM Fault Condition Value                                             */
  __IO uint32_t  ENUPD;                             /*!< PWM Enable Update                                                     */
  __I  uint32_t  RESERVED0[5];
  __IO uint32_t  _0_CTL;                            /*!< PWM0 Control                                                          */
  __IO uint32_t  _0_INTEN;                          /*!< PWM0 Interrupt and Trigger Enable                                     */
  __IO uint32_t  _0_RIS;                            /*!< PWM0 Raw Interrupt Status                                             */
  __IO uint32_t  _0_ISC;                            /*!< PWM0 Interrupt Status and Clear                                       */
  __IO uint32_t  _0_LOAD;                           /*!< PWM0 Load                                                             */
  __IO uint32_t  _0_COUNT;                          /*!< PWM0 Counter                                                          */
  __IO uint32_t  _0_CMPA;                           /*!< PWM0 Compare A                                                        */
  __IO uint32_t  _0_CMPB;                           /*!< PWM0 Compare B                                                        */
  __IO uint32_t  _0_GENA;                           /*!< PWM0 Generator A Control                                              */
  __IO uint32_t  _0_GENB;                           /*!< PWM0 Generator B Control                                              */
  __IO uint32_t  _0_DBCTL;                          /*!< PWM0 Dead-Band Control                                                */
  __IO uint32_t  _0_DBRISE;                         /*!< PWM0 Dead-Band Rising-Edge Delay                                      */
  __IO uint32_t  _0_DBFALL;                         /*!< PWM0 Dead-Band Falling-Edge-Delay                                     */
  __IO uint32_t  _0_FLTSRC0;                        /*!< PWM0 Fault Source 0                                                   */
  __IO uint32_t  _0_FLTSRC1;                        /*!< PWM0 Fault Source 1                                                   */
  __IO uint32_t  _0_MINFLTPER;                      /*!< PWM0 Minimum Fault Period                                             */
  __IO uint32_t  _1_CTL;                            /*!< PWM1 Control                                                          */
  __IO uint32_t  _1_INTEN;                          /*!< PWM1 Interrupt and Trigger Enable                                     */
  __IO uint32_t  _1_RIS;                            /*!< PWM1 Raw Interrupt Status                                             */
  __IO uint32_t  _1_ISC;                            /*!< PWM1 Interrupt Status and Clear                                       */
  __IO uint32_t  _1_LOAD;                           /*!< PWM1 Load                                                             */
  __IO uint32_t  _1_COUNT;                          /*!< PWM1 Counter                                                          */
  __IO uint32_t  _1_CMPA;                           /*!< PWM1 Compare A                                                        */
  __IO uint32_t  _1_CMPB;                           /*!< PWM1 Compare B                                                        */
  __IO uint32_t  _1_GENA;                           /*!< PWM1 Generator A Control                                              */
  __IO uint32_t  _1_GENB;                           /*!< PWM1 Generator B Control                                              */
  __IO uint32_t  _1_DBCTL;                          /*!< PWM1 Dead-Band Control                                                */
  __IO uint32_t  _1_DBRISE;                         /*!< PWM1 Dead-Band Rising-Edge Delay                                      */
  __IO uint32_t  _1_DBFALL;                         /*!< PWM1 Dead-Band Falling-Edge-Delay                                     */
  __IO uint32_t  _1_FLTSRC0;                        /*!< PWM1 Fault Source 0                                                   */
  __IO uint32_t  _1_FLTSRC1;                        /*!< PWM1 Fault Source 1                                                   */
  __IO uint32_t  _1_MINFLTPER;                      /*!< PWM1 Minimum Fault Period                                             */
  __IO uint32_t  _2_CTL;                            /*!< PWM2 Control                                                          */
  __IO uint32_t  _2_INTEN;                          /*!< PWM2 Interrupt and Trigger Enable                                     */
  __IO uint32_t  _2_RIS;                            /*!< PWM2 Raw Interrupt Status                                             */
  __IO uint32_t  _2_ISC;                            /*!< PWM2 Interrupt Status and Clear                                       */
  __IO uint32_t  _2_LOAD;                           /*!< PWM2 Load                                                             */
  __IO uint32_t  _2_COUNT;                          /*!< PWM2 Counter                                                          */
  __IO uint32_t  _2_CMPA;                           /*!< PWM2 Compare A                                                        */
  __IO uint32_t  _2_CMPB;                           /*!< PWM2 Compare B                                                        */
  __IO uint32_t  _2_GENA;                           /*!< PWM2 Generator A Control                                              */
  __IO uint32_t  _2_GENB;                           /*!< PWM2 Generator B Control                                              */
  __IO uint32_t  _2_DBCTL;                          /*!< PWM2 Dead-Band Control                                                */
  __IO uint32_t  _2_DBRISE;                         /*!< PWM2 Dead-Band Rising-Edge Delay                                      */
  __IO uint32_t  _2_DBFALL;                         /*!< PWM2 Dead-Band Falling-Edge-Delay                                     */
  __IO uint32_t  _2_FLTSRC0;                        /*!< PWM2 Fault Source 0                                                   */
  __IO uint32_t  _2_FLTSRC1;                        /*!< PWM2 Fault Source 1                                                   */
  __IO uint32_t  _2_MINFLTPER;                      /*!< PWM2 Minimum Fault Period                                             */
  __I  uint32_t  RESERVED1[448];
  __IO uint32_t  _0_FLTSEN;                         /*!< PWM0 Fault Pin Logic Sense                                            */
  __I  uint32_t  _0_FLTSTAT0;                       /*!< PWM0 Fault Status 0                                                   */
  __I  uint32_t  _0_FLTSTAT1;                       /*!< PWM0 Fault Status 1                                                   */
  __I  uint32_t  RESERVED2[29];
  __IO uint32_t  _1_FLTSEN;                         /*!< PWM1 Fault Pin Logic Sense                                            */
  __I  uint32_t  _1_FLTSTAT0;                       /*!< PWM1 Fault Status 0                                                   */
  __I  uint32_t  _1_FLTSTAT1;                       /*!< PWM1 Fault Status 1                                                   */
  __I  uint32_t  RESERVED3[29];
  __IO uint32_t  _2_FLTSEN;                         /*!< PWM2 Fault Pin Logic Sense                                            */
  __I  uint32_t  _2_FLTSTAT0;                       /*!< PWM2 Fault Status 0                                                   */
  __I  uint32_t  _2_FLTSTAT1;                       /*!< PWM2 Fault Status 1                                                   */
  __I  uint32_t  RESERVED4[29];
  __IO uint32_t  _3_FLTSEN;                         /*!< PWM3 Fault Pin Logic Sense                                            */
} PWM0_Type;


/* ================================================================================ */
/* ================                      QEI0                      ================ */
/* ================================================================================ */


/**
  * @brief Register map for QEI0 peripheral (QEI0)
  */

typedef struct {                                    /*!< QEI0 Structure                                                        */
  __IO uint32_t  CTL;                               /*!< QEI Control                                                           */
  __IO uint32_t  STAT;                              /*!< QEI Status                                                            */
  __IO uint32_t  POS;                               /*!< QEI Position                                                          */
  __IO uint32_t  MAXPOS;                            /*!< QEI Maximum Position                                                  */
  __IO uint32_t  LOAD;                              /*!< QEI Timer Load                                                        */
  __IO uint32_t  TIME;                              /*!< QEI Timer                                                             */
  __IO uint32_t  COUNT;                             /*!< QEI Velocity Counter                                                  */
  __IO uint32_t  SPEED;                             /*!< QEI Velocity                                                          */
  __IO uint32_t  INTEN;                             /*!< QEI Interrupt Enable                                                  */
  __IO uint32_t  RIS;                               /*!< QEI Raw Interrupt Status                                              */
  __IO uint32_t  ISC;                               /*!< QEI Interrupt Status and Clear                                        */
} QEI0_Type;


/* ================================================================================ */
/* ================                     TIMER0                     ================ */
/* ================================================================================ */


/**
  * @brief Register map for TIMER0 peripheral (TIMER0)
  */

typedef struct {                                    /*!< TIMER0 Structure                                                      */
  __IO uint32_t  CFG;                               /*!< GPTM Configuration                                                    */
  __IO uint32_t  TAMR;                              /*!< GPTM Timer A Mode                                                     */
  __IO uint32_t  TBMR;                              /*!< GPTM Timer B Mode                                                     */
  __IO uint32_t  CTL;                               /*!< GPTM Control                                                          */
  __I  uint32_t  RESERVED0[2];
  __IO uint32_t  IMR;                               /*!< GPTM Interrupt Mask                                                   */
  __IO uint32_t  RIS;                               /*!< GPTM Raw Interrupt Status                                             */
  __IO uint32_t  MIS;                               /*!< GPTM Masked Interrupt Status                                          */
  __O  uint32_t  ICR;                               /*!< GPTM Interrupt Clear                                                  */
  __IO uint32_t  TAILR;                             /*!< GPTM Timer A Interval Load                                            */
  __IO uint32_t  TBILR;                             /*!< GPTM Timer B Interval Load                                            */
  __IO uint32_t  TAMATCHR;                          /*!< GPTM Timer A Match                                                    */
  __IO uint32_t  TBMATCHR;                          /*!< GPTM Timer B Match                                                    */
  __IO uint32_t  TAPR;                              /*!< GPTM Timer A Prescale                                                 */
  __IO uint32_t  TBPR;                              /*!< GPTM Timer B Prescale                                                 */
  __IO uint32_t  TAPMR;                             /*!< GPTM TimerA Prescale Match                                            */
  __IO uint32_t  TBPMR;                             /*!< GPTM TimerB Prescale Match                                            */
  __IO uint32_t  TAR;                               /*!< GPTM Timer A                                                          */
  __IO uint32_t  TBR;                               /*!< GPTM Timer B                                                          */
  __IO uint32_t  TAV;                               /*!< GPTM Timer A Value                                                    */
  __IO uint32_t  TBV;                               /*!< GPTM Timer B Value                                                    */
} TIMER0_Type;


/* ================================================================================ */
/* ================                      ADC0                      ================ */
/* ================================================================================ */


/**
  * @brief Register map for ADC0 peripheral (ADC0)
  */

typedef struct {                                    /*!< ADC0 Structure                                                        */
  __IO uint32_t  ACTSS;                             /*!< ADC Active Sample Sequencer                                           */
  __IO uint32_t  RIS;                               /*!< ADC Raw Interrupt Status                                              */
  __IO uint32_t  IM;                                /*!< ADC Interrupt Mask                                                    */
  __IO uint32_t  ISC;                               /*!< ADC Interrupt Status and Clear                                        */
  __IO uint32_t  OSTAT;                             /*!< ADC Overflow Status                                                   */
  __IO uint32_t  EMUX;                              /*!< ADC Event Multiplexer Select                                          */
  __IO uint32_t  USTAT;                             /*!< ADC Underflow Status                                                  */
  __I  uint32_t  RESERVED0;
  __IO uint32_t  SSPRI;                             /*!< ADC Sample Sequencer Priority                                         */
  __IO uint32_t  SPC;                               /*!< ADC Sample Phase Control                                              */
  __IO uint32_t  PSSI;                              /*!< ADC Processor Sample Sequence Initiate                                */
  __I  uint32_t  RESERVED1;
  __IO uint32_t  SAC;                               /*!< ADC Sample Averaging Control                                          */
  __IO uint32_t  DCISC;                             /*!< ADC Digital Comparator Interrupt Status and Clear                     */
  __IO uint32_t  CTL;                               /*!< ADC Control                                                           */
  __I  uint32_t  RESERVED2;
  __IO uint32_t  SSMUX0;                            /*!< ADC Sample Sequence Input Multiplexer Select 0                        */
  __IO uint32_t  SSCTL0;                            /*!< ADC Sample Sequence Control 0                                         */
  __IO uint32_t  SSFIFO0;                           /*!< ADC Sample Sequence Result FIFO 0                                     */
  __IO uint32_t  SSFSTAT0;                          /*!< ADC Sample Sequence FIFO 0 Status                                     */
  __IO uint32_t  SSOP0;                             /*!< ADC Sample Sequence 0 Operation                                       */
  __IO uint32_t  SSDC0;                             /*!< ADC Sample Sequence 0 Digital Comparator Select                       */
  __I  uint32_t  RESERVED3[2];
  __IO uint32_t  SSMUX1;                            /*!< ADC Sample Sequence Input Multiplexer Select 1                        */
  __IO uint32_t  SSCTL1;                            /*!< ADC Sample Sequence Control 1                                         */
  __IO uint32_t  SSFIFO1;                           /*!< ADC Sample Sequence Result FIFO 1                                     */
  __IO uint32_t  SSFSTAT1;                          /*!< ADC Sample Sequence FIFO 1 Status                                     */
  __IO uint32_t  SSOP1;                             /*!< ADC Sample Sequence 1 Operation                                       */
  __IO uint32_t  SSDC1;                             /*!< ADC Sample Sequence 1 Digital Comparator Select                       */
  __I  uint32_t  RESERVED4[2];
  __IO uint32_t  SSMUX2;                            /*!< ADC Sample Sequence Input Multiplexer Select 2                        */
  __IO uint32_t  SSCTL2;                            /*!< ADC Sample Sequence Control 2                                         */
  __IO uint32_t  SSFIFO2;                           /*!< ADC Sample Sequence Result FIFO 2                                     */
  __IO uint32_t  SSFSTAT2;                          /*!< ADC Sample Sequence FIFO 2 Status                                     */
  __IO uint32_t  SSOP2;                             /*!< ADC Sample Sequence 2 Operation                                       */
  __IO uint32_t  SSDC2;                             /*!< ADC Sample Sequence 2 Digital Comparator Select                       */
  __I  uint32_t  RESERVED5[2];
  __IO uint32_t  SSMUX3;                            /*!< ADC Sample Sequence Input Multiplexer Select 3                        */
  __IO uint32_t  SSCTL3;                            /*!< ADC Sample Sequence Control 3                                         */
  __IO uint32_t  SSFIFO3;                           /*!< ADC Sample Sequence Result FIFO 3                                     */
  __IO uint32_t  SSFSTAT3;                          /*!< ADC Sample Sequence FIFO 3 Status                                     */
  __IO uint32_t  SSOP3;                             /*!< ADC Sample Sequence 3 Operation                                       */
  __IO uint32_t  SSDC3;                             /*!< ADC Sample Sequence 3 Digital Comparator Select                       */
  __I  uint32_t  RESERVED6[786];
  __IO uint32_t  DCRIC;                             /*!< ADC Digital Comparator Reset Initial Conditions                       */
  __I  uint32_t  RESERVED7[63];
  __IO uint32_t  DCCTL0;                            /*!< ADC Digital Comparator Control 0                                      */
  __IO uint32_t  DCCTL1;                            /*!< ADC Digital Comparator Control 1                                      */
  __IO uint32_t  DCCTL2;                            /*!< ADC Digital Comparator Control 2                                      */
  __IO uint32_t  DCCTL3;                            /*!< ADC Digital Comparator Control 3                                      */
  __IO uint32_t  DCCTL4;                            /*!< ADC Digital Comparator Control 4                                      */
  __IO uint32_t  DCCTL5;                            /*!< ADC Digital Comparator Control 5                                      */
  __IO uint32_t  DCCTL6;                            /*!< ADC Digital Comparator Control 6                                      */
  __IO uint32_t  DCCTL7;                            /*!< ADC Digital Comparator Control 7                                      */
  __I  uint32_t  RESERVED8[8];
  __IO uint32_t  DCCMP0;                            /*!< ADC Digital Comparator Range 0                                        */
  __IO uint32_t  DCCMP1;                            /*!< ADC Digital Comparator Range 1                                        */
  __IO uint32_t  DCCMP2;                            /*!< ADC Digital Comparator Range 2                                        */
  __IO uint32_t  DCCMP3;                            /*!< ADC Digital Comparator Range 3                                        */
  __IO uint32_t  DCCMP4;                            /*!< ADC Digital Comparator Range 4                                        */
  __IO uint32_t  DCCMP5;                            /*!< ADC Digital Comparator Range 5                                        */
  __IO uint32_t  DCCMP6;                            /*!< ADC Digital Comparator Range 6                                        */
  __IO uint32_t  DCCMP7;                            /*!< ADC Digital Comparator Range 7                                        */
} ADC0_Type;


/* ================================================================================ */
/* ================                      COMP                      ================ */
/* ================================================================================ */


/**
  * @brief Register map for COMP peripheral (COMP)
  */

typedef struct {                                    /*!< COMP Structure                                                        */
  __IO uint32_t  ACMIS;                             /*!< Analog Comparator Masked Interrupt Status                             */
  __IO uint32_t  ACRIS;                             /*!< Analog Comparator Raw Interrupt Status                                */
  __IO uint32_t  ACINTEN;                           /*!< Analog Comparator Interrupt Enable                                    */
  __I  uint32_t  RESERVED0;
  __IO uint32_t  ACREFCTL;                          /*!< Analog Comparator Reference Voltage Control                           */
  __I  uint32_t  RESERVED1[3];
  __IO uint32_t  ACSTAT0;                           /*!< Analog Comparator Status 0                                            */
  __IO uint32_t  ACCTL0;                            /*!< Analog Comparator Control 0                                           */
  __I  uint32_t  RESERVED2[6];
  __IO uint32_t  ACSTAT1;                           /*!< Analog Comparator Status 1                                            */
  __IO uint32_t  ACCTL1;                            /*!< Analog Comparator Control 1                                           */
} COMP_Type;


/* ================================================================================ */
/* ================                      CAN0                      ================ */
/* ================================================================================ */


/**
  * @brief Register map for CAN0 peripheral (CAN0)
  */

typedef struct {                                    /*!< CAN0 Structure                                                        */
  __IO uint32_t  CTL;                               /*!< CAN Control                                                           */
  __IO uint32_t  STS;                               /*!< CAN Status                                                            */
  __IO uint32_t  ERR;                               /*!< CAN Error Counter                                                     */
  __IO uint32_t  BIT;                               /*!< CAN Bit Timing                                                        */
  __IO uint32_t  INT;                               /*!< CAN Interrupt                                                         */
  __IO uint32_t  TST;                               /*!< CAN Test                                                              */
  __IO uint32_t  BRPE;                              /*!< CAN Baud Rate Prescaler Extension                                     */
  __I  uint32_t  RESERVED0;
  __IO uint32_t  IF1CRQ;                            /*!< CAN IF1 Command Request                                               */
  
  union {
    __IO uint32_t  CAN0_ALT_IF1CMSK;                /*!< CAN IF1 Command Mask                                                  */
    __IO uint32_t  IF1CMSK;                         /*!< CAN IF1 Command Mask                                                  */
  } ;
  __IO uint32_t  IF1MSK1;                           /*!< CAN IF1 Mask 1                                                        */
  __IO uint32_t  IF1MSK2;                           /*!< CAN IF1 Mask 2                                                        */
  __IO uint32_t  IF1ARB1;                           /*!< CAN IF1 Arbitration 1                                                 */
  __IO uint32_t  IF1ARB2;                           /*!< CAN IF1 Arbitration 2                                                 */
  __IO uint32_t  IF1MCTL;                           /*!< CAN IF1 Message Control                                               */
  __IO uint32_t  IF1DA1;                            /*!< CAN IF1 Data A1                                                       */
  __IO uint32_t  IF1DA2;                            /*!< CAN IF1 Data A2                                                       */
  __IO uint32_t  IF1DB1;                            /*!< CAN IF1 Data B1                                                       */
  __IO uint32_t  IF1DB2;                            /*!< CAN IF1 Data B2                                                       */
  __I  uint32_t  RESERVED1[13];
  __IO uint32_t  IF2CRQ;                            /*!< CAN IF2 Command Request                                               */
  
  union {
    __IO uint32_t  CAN0_ALT_IF2CMSK;                /*!< CAN IF2 Command Mask                                                  */
    __IO uint32_t  IF2CMSK;                         /*!< CAN IF2 Command Mask                                                  */
  } ;
  __IO uint32_t  IF2MSK1;                           /*!< CAN IF2 Mask 1                                                        */
  __IO uint32_t  IF2MSK2;                           /*!< CAN IF2 Mask 2                                                        */
  __IO uint32_t  IF2ARB1;                           /*!< CAN IF2 Arbitration 1                                                 */
  __IO uint32_t  IF2ARB2;                           /*!< CAN IF2 Arbitration 2                                                 */
  __IO uint32_t  IF2MCTL;                           /*!< CAN IF2 Message Control                                               */
  __IO uint32_t  IF2DA1;                            /*!< CAN IF2 Data A1                                                       */
  __IO uint32_t  IF2DA2;                            /*!< CAN IF2 Data A2                                                       */
  __IO uint32_t  IF2DB1;                            /*!< CAN IF2 Data B1                                                       */
  __IO uint32_t  IF2DB2;                            /*!< CAN IF2 Data B2                                                       */
  __I  uint32_t  RESERVED2[21];
  __IO uint32_t  TXRQ1;                             /*!< CAN Transmission Request 1                                            */
  __IO uint32_t  TXRQ2;                             /*!< CAN Transmission Request 2                                            */
  __I  uint32_t  RESERVED3[6];
  __IO uint32_t  NWDA1;                             /*!< CAN New Data 1                                                        */
  __IO uint32_t  NWDA2;                             /*!< CAN New Data 2                                                        */
  __I  uint32_t  RESERVED4[6];
  __IO uint32_t  MSG1INT;                           /*!< CAN Message 1 Interrupt Pending                                       */
  __IO uint32_t  MSG2INT;                           /*!< CAN Message 2 Interrupt Pending                                       */
  __I  uint32_t  RESERVED5[6];
  __IO uint32_t  MSG1VAL;                           /*!< CAN Message 1 Valid                                                   */
  __IO uint32_t  MSG2VAL;                           /*!< CAN Message 2 Valid                                                   */
} CAN0_Type;


/* ================================================================================ */
/* ================                      USB0                      ================ */
/* ================================================================================ */


/**
  * @brief Register map for USB0 peripheral (USB0)
  */

typedef struct {                                    /*!< USB0 Structure                                                        */
  
  union {
    __IO uint16_t  TXIS;                            /*!< USB Transmit Interrupt Status                                         */
    
    struct {
      __IO uint8_t   FADDR;                         /*!< USB Device Functional Address                                         */
      __IO uint8_t   POWER;                         /*!< USB Power                                                             */
    } ;
  } ;
  __I  uint16_t  RESERVED0;
  __IO uint16_t  RXIS;                              /*!< USB Receive Interrupt Status                                          */
  __IO uint16_t  TXIE;                              /*!< USB Transmit Interrupt Enable                                         */
  
  union {
    __IO uint16_t  RXIE;                            /*!< USB Receive Interrupt Enable                                          */
    
    struct {
      __I  uint8_t   RESERVED1;
      __I  uint8_t   RESERVED2;
      
      union {
        __IO uint8_t   USB0_ALT_IS;                 /*!< USB General Interrupt Status                                          */
        __IO uint8_t   IS;                          /*!< USB General Interrupt Status                                          */
      } ;
      
      union {
        __IO uint8_t   USB0_ALT_IE;                 /*!< USB Interrupt Enable                                                  */
        __IO uint8_t   IE;                          /*!< USB Interrupt Enable                                                  */
      } ;
    } ;
  } ;
  
  union {
    __IO uint16_t  FRAME;                           /*!< USB Frame Value                                                       */
    
    struct {
      __I  uint8_t   RESERVED3;
      __I  uint8_t   RESERVED4;
      __IO uint8_t   EPIDX;                         /*!< USB Endpoint Index                                                    */
      __IO uint8_t   TEST;                          /*!< USB Test Mode                                                         */
    } ;
  } ;
  __I  uint32_t  RESERVED5[4];
  __IO uint32_t  FIFO0;                             /*!< USB FIFO Endpoint 0                                                   */
  __IO uint32_t  FIFO1;                             /*!< USB FIFO Endpoint 1                                                   */
  __IO uint32_t  FIFO2;                             /*!< USB FIFO Endpoint 2                                                   */
  __IO uint32_t  FIFO3;                             /*!< USB FIFO Endpoint 3                                                   */
  __IO uint32_t  FIFO4;                             /*!< USB FIFO Endpoint 4                                                   */
  __IO uint32_t  FIFO5;                             /*!< USB FIFO Endpoint 5                                                   */
  __IO uint32_t  FIFO6;                             /*!< USB FIFO Endpoint 6                                                   */
  __IO uint32_t  FIFO7;                             /*!< USB FIFO Endpoint 7                                                   */
  __IO uint32_t  FIFO8;                             /*!< USB FIFO Endpoint 8                                                   */
  __IO uint32_t  FIFO9;                             /*!< USB FIFO Endpoint 9                                                   */
  __IO uint32_t  FIFO10;                            /*!< USB FIFO Endpoint 10                                                  */
  __IO uint32_t  FIFO11;                            /*!< USB FIFO Endpoint 11                                                  */
  __IO uint32_t  FIFO12;                            /*!< USB FIFO Endpoint 12                                                  */
  __IO uint32_t  FIFO13;                            /*!< USB FIFO Endpoint 13                                                  */
  __IO uint32_t  FIFO14;                            /*!< USB FIFO Endpoint 14                                                  */
  __IO uint32_t  FIFO15;                            /*!< USB FIFO Endpoint 15                                                  */
  __I  uint8_t   RESERVED6;
  __IO uint8_t   TXFIFOSZ;                          /*!< USB Transmit Dynamic FIFO Sizing                                      */
  __IO uint8_t   RXFIFOSZ;                          /*!< USB Receive Dynamic FIFO Sizing                                       */
  __I  uint8_t   RESERVED7[1];
  __IO uint16_t  TXFIFOADD;                         /*!< USB Transmit FIFO Start Address                                       */
  __IO uint16_t  RXFIFOADD;                         /*!< USB Receive FIFO Start Address                                        */
  __I  uint32_t  RESERVED8[4];
  __I  uint8_t   RESERVED9;
  __IO uint8_t   CONTIM;                            /*!< USB Connect Timing                                                    */
  __I  uint16_t  RESERVED10;
  __I  uint8_t   RESERVED11;
  __IO uint8_t   FSEOF;                             /*!< USB Full-Speed Last Transaction to End of Frame Timing                */
  __IO uint8_t   LSEOF;                             /*!< USB Low-Speed Last Transaction to End of Frame Timing                 */
  __I  uint8_t   RESERVED12[129];
  __I  uint8_t   RESERVED13;
  __IO uint8_t   CSRL0;                             /*!< USB Control and Status Endpoint 0 Low                                 */
  __IO uint8_t   CSRH0;                             /*!< USB Control and Status Endpoint 0 High                                */
  __I  uint8_t   RESERVED14[5];
  __IO uint8_t   COUNT0;                            /*!< USB Receive Byte Count Endpoint 0                                     */
  __I  uint8_t   RESERVED15[7];
  
  union {
    __IO uint16_t  TXMAXP1;                         /*!< USB Maximum Transmit Data Endpoint 1                                  */
    
    struct {
      __I  uint8_t   RESERVED16;
      __I  uint8_t   RESERVED17;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL1;            /*!< USB Transmit Control and Status Endpoint 1 Low                        */
        __IO uint8_t   TXCSRL1;                     /*!< USB Transmit Control and Status Endpoint 1 Low                        */
      } ;
      __IO uint8_t   TXCSRH1;                       /*!< USB Transmit Control and Status Endpoint 1 High                       */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP1;                         /*!< USB Maximum Receive Data Endpoint 1                                   */
    
    struct {
      __I  uint8_t   RESERVED18;
      __I  uint8_t   RESERVED19;
      __IO uint8_t   RXCSRL1;                       /*!< USB Receive Control and Status Endpoint 1 Low                         */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH1;            /*!< USB Receive Control and Status Endpoint 1 High                        */
        __IO uint8_t   RXCSRH1;                     /*!< USB Receive Control and Status Endpoint 1 High                        */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT1;                          /*!< USB Receive Byte Count Endpoint 1                                     */
  __I  uint16_t  RESERVED20[3];
  
  union {
    __IO uint16_t  TXMAXP2;                         /*!< USB Maximum Transmit Data Endpoint 2                                  */
    
    struct {
      __I  uint8_t   RESERVED21;
      __I  uint8_t   RESERVED22;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL2;            /*!< USB Transmit Control and Status Endpoint 2 Low                        */
        __IO uint8_t   TXCSRL2;                     /*!< USB Transmit Control and Status Endpoint 2 Low                        */
      } ;
      __IO uint8_t   TXCSRH2;                       /*!< USB Transmit Control and Status Endpoint 2 High                       */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP2;                         /*!< USB Maximum Receive Data Endpoint 2                                   */
    
    struct {
      __I  uint8_t   RESERVED23;
      __I  uint8_t   RESERVED24;
      __IO uint8_t   RXCSRL2;                       /*!< USB Receive Control and Status Endpoint 2 Low                         */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH2;            /*!< USB Receive Control and Status Endpoint 2 High                        */
        __IO uint8_t   RXCSRH2;                     /*!< USB Receive Control and Status Endpoint 2 High                        */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT2;                          /*!< USB Receive Byte Count Endpoint 2                                     */
  __I  uint16_t  RESERVED25[3];
  
  union {
    __IO uint16_t  TXMAXP3;                         /*!< USB Maximum Transmit Data Endpoint 3                                  */
    
    struct {
      __I  uint8_t   RESERVED26;
      __I  uint8_t   RESERVED27;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL3;            /*!< USB Transmit Control and Status Endpoint 3 Low                        */
        __IO uint8_t   TXCSRL3;                     /*!< USB Transmit Control and Status Endpoint 3 Low                        */
      } ;
      __IO uint8_t   TXCSRH3;                       /*!< USB Transmit Control and Status Endpoint 3 High                       */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP3;                         /*!< USB Maximum Receive Data Endpoint 3                                   */
    
    struct {
      __I  uint8_t   RESERVED28;
      __I  uint8_t   RESERVED29;
      __IO uint8_t   RXCSRL3;                       /*!< USB Receive Control and Status Endpoint 3 Low                         */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH3;            /*!< USB Receive Control and Status Endpoint 3 High                        */
        __IO uint8_t   RXCSRH3;                     /*!< USB Receive Control and Status Endpoint 3 High                        */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT3;                          /*!< USB Receive Byte Count Endpoint 3                                     */
  __I  uint16_t  RESERVED30[3];
  
  union {
    __IO uint16_t  TXMAXP4;                         /*!< USB Maximum Transmit Data Endpoint 4                                  */
    
    struct {
      __I  uint8_t   RESERVED31;
      __I  uint8_t   RESERVED32;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL4;            /*!< USB Transmit Control and Status Endpoint 4 Low                        */
        __IO uint8_t   TXCSRL4;                     /*!< USB Transmit Control and Status Endpoint 4 Low                        */
      } ;
      __IO uint8_t   TXCSRH4;                       /*!< USB Transmit Control and Status Endpoint 4 High                       */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP4;                         /*!< USB Maximum Receive Data Endpoint 4                                   */
    
    struct {
      __I  uint8_t   RESERVED33;
      __I  uint8_t   RESERVED34;
      __IO uint8_t   RXCSRL4;                       /*!< USB Receive Control and Status Endpoint 4 Low                         */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH4;            /*!< USB Receive Control and Status Endpoint 4 High                        */
        __IO uint8_t   RXCSRH4;                     /*!< USB Receive Control and Status Endpoint 4 High                        */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT4;                          /*!< USB Receive Byte Count Endpoint 4                                     */
  __I  uint16_t  RESERVED35[3];
  
  union {
    __IO uint16_t  TXMAXP5;                         /*!< USB Maximum Transmit Data Endpoint 5                                  */
    
    struct {
      __I  uint8_t   RESERVED36;
      __I  uint8_t   RESERVED37;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL5;            /*!< USB Transmit Control and Status Endpoint 5 Low                        */
        __IO uint8_t   TXCSRL5;                     /*!< USB Transmit Control and Status Endpoint 5 Low                        */
      } ;
      __IO uint8_t   TXCSRH5;                       /*!< USB Transmit Control and Status Endpoint 5 High                       */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP5;                         /*!< USB Maximum Receive Data Endpoint 5                                   */
    
    struct {
      __I  uint8_t   RESERVED38;
      __I  uint8_t   RESERVED39;
      __IO uint8_t   RXCSRL5;                       /*!< USB Receive Control and Status Endpoint 5 Low                         */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH5;            /*!< USB Receive Control and Status Endpoint 5 High                        */
        __IO uint8_t   RXCSRH5;                     /*!< USB Receive Control and Status Endpoint 5 High                        */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT5;                          /*!< USB Receive Byte Count Endpoint 5                                     */
  __I  uint16_t  RESERVED40[3];
  
  union {
    __IO uint16_t  TXMAXP6;                         /*!< USB Maximum Transmit Data Endpoint 6                                  */
    
    struct {
      __I  uint8_t   RESERVED41;
      __I  uint8_t   RESERVED42;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL6;            /*!< USB Transmit Control and Status Endpoint 6 Low                        */
        __IO uint8_t   TXCSRL6;                     /*!< USB Transmit Control and Status Endpoint 6 Low                        */
      } ;
      __IO uint8_t   TXCSRH6;                       /*!< USB Transmit Control and Status Endpoint 6 High                       */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP6;                         /*!< USB Maximum Receive Data Endpoint 6                                   */
    
    struct {
      __I  uint8_t   RESERVED43;
      __I  uint8_t   RESERVED44;
      __IO uint8_t   RXCSRL6;                       /*!< USB Receive Control and Status Endpoint 6 Low                         */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH6;            /*!< USB Receive Control and Status Endpoint 6 High                        */
        __IO uint8_t   RXCSRH6;                     /*!< USB Receive Control and Status Endpoint 6 High                        */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT6;                          /*!< USB Receive Byte Count Endpoint 6                                     */
  __I  uint16_t  RESERVED45[3];
  
  union {
    __IO uint16_t  TXMAXP7;                         /*!< USB Maximum Transmit Data Endpoint 7                                  */
    
    struct {
      __I  uint8_t   RESERVED46;
      __I  uint8_t   RESERVED47;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL7;            /*!< USB Transmit Control and Status Endpoint 7 Low                        */
        __IO uint8_t   TXCSRL7;                     /*!< USB Transmit Control and Status Endpoint 7 Low                        */
      } ;
      __IO uint8_t   TXCSRH7;                       /*!< USB Transmit Control and Status Endpoint 7 High                       */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP7;                         /*!< USB Maximum Receive Data Endpoint 7                                   */
    
    struct {
      __I  uint8_t   RESERVED48;
      __I  uint8_t   RESERVED49;
      __IO uint8_t   RXCSRL7;                       /*!< USB Receive Control and Status Endpoint 7 Low                         */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH7;            /*!< USB Receive Control and Status Endpoint 7 High                        */
        __IO uint8_t   RXCSRH7;                     /*!< USB Receive Control and Status Endpoint 7 High                        */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT7;                          /*!< USB Receive Byte Count Endpoint 7                                     */
  __I  uint16_t  RESERVED50[3];
  
  union {
    __IO uint16_t  TXMAXP8;                         /*!< USB Maximum Transmit Data Endpoint 8                                  */
    
    struct {
      __I  uint8_t   RESERVED51;
      __I  uint8_t   RESERVED52;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL8;            /*!< USB Transmit Control and Status Endpoint 8 Low                        */
        __IO uint8_t   TXCSRL8;                     /*!< USB Transmit Control and Status Endpoint 8 Low                        */
      } ;
      __IO uint8_t   TXCSRH8;                       /*!< USB Transmit Control and Status Endpoint 8 High                       */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP8;                         /*!< USB Maximum Receive Data Endpoint 8                                   */
    
    struct {
      __I  uint8_t   RESERVED53;
      __I  uint8_t   RESERVED54;
      __IO uint8_t   RXCSRL8;                       /*!< USB Receive Control and Status Endpoint 8 Low                         */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH8;            /*!< USB Receive Control and Status Endpoint 8 High                        */
        __IO uint8_t   RXCSRH8;                     /*!< USB Receive Control and Status Endpoint 8 High                        */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT8;                          /*!< USB Receive Byte Count Endpoint 8                                     */
  __I  uint16_t  RESERVED55[3];
  
  union {
    __IO uint16_t  TXMAXP9;                         /*!< USB Maximum Transmit Data Endpoint 9                                  */
    
    struct {
      __I  uint8_t   RESERVED56;
      __I  uint8_t   RESERVED57;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL9;            /*!< USB Transmit Control and Status Endpoint 9 Low                        */
        __IO uint8_t   TXCSRL9;                     /*!< USB Transmit Control and Status Endpoint 9 Low                        */
      } ;
      __IO uint8_t   TXCSRH9;                       /*!< USB Transmit Control and Status Endpoint 9 High                       */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP9;                         /*!< USB Maximum Receive Data Endpoint 9                                   */
    
    struct {
      __I  uint8_t   RESERVED58;
      __I  uint8_t   RESERVED59;
      __IO uint8_t   RXCSRL9;                       /*!< USB Receive Control and Status Endpoint 9 Low                         */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH9;            /*!< USB Receive Control and Status Endpoint 9 High                        */
        __IO uint8_t   RXCSRH9;                     /*!< USB Receive Control and Status Endpoint 9 High                        */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT9;                          /*!< USB Receive Byte Count Endpoint 9                                     */
  __I  uint16_t  RESERVED60[3];
  
  union {
    __IO uint16_t  TXMAXP10;                        /*!< USB Maximum Transmit Data Endpoint 10                                 */
    
    struct {
      __I  uint8_t   RESERVED61;
      __I  uint8_t   RESERVED62;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL10;           /*!< USB Transmit Control and Status Endpoint 10 Low                       */
        __IO uint8_t   TXCSRL10;                    /*!< USB Transmit Control and Status Endpoint 10 Low                       */
      } ;
      __IO uint8_t   TXCSRH10;                      /*!< USB Transmit Control and Status Endpoint 10 High                      */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP10;                        /*!< USB Maximum Receive Data Endpoint 10                                  */
    
    struct {
      __I  uint8_t   RESERVED63;
      __I  uint8_t   RESERVED64;
      __IO uint8_t   RXCSRL10;                      /*!< USB Receive Control and Status Endpoint 10 Low                        */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH10;           /*!< USB Receive Control and Status Endpoint 10 High                       */
        __IO uint8_t   RXCSRH10;                    /*!< USB Receive Control and Status Endpoint 10 High                       */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT10;                         /*!< USB Receive Byte Count Endpoint 10                                    */
  __I  uint16_t  RESERVED65[3];
  
  union {
    __IO uint16_t  TXMAXP11;                        /*!< USB Maximum Transmit Data Endpoint 11                                 */
    
    struct {
      __I  uint8_t   RESERVED66;
      __I  uint8_t   RESERVED67;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL11;           /*!< USB Transmit Control and Status Endpoint 11 Low                       */
        __IO uint8_t   TXCSRL11;                    /*!< USB Transmit Control and Status Endpoint 11 Low                       */
      } ;
      __IO uint8_t   TXCSRH11;                      /*!< USB Transmit Control and Status Endpoint 11 High                      */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP11;                        /*!< USB Maximum Receive Data Endpoint 11                                  */
    
    struct {
      __I  uint8_t   RESERVED68;
      __I  uint8_t   RESERVED69;
      __IO uint8_t   RXCSRL11;                      /*!< USB Receive Control and Status Endpoint 11 Low                        */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH11;           /*!< USB Receive Control and Status Endpoint 11 High                       */
        __IO uint8_t   RXCSRH11;                    /*!< USB Receive Control and Status Endpoint 11 High                       */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT11;                         /*!< USB Receive Byte Count Endpoint 11                                    */
  __I  uint16_t  RESERVED70[3];
  
  union {
    __IO uint16_t  TXMAXP12;                        /*!< USB Maximum Transmit Data Endpoint 12                                 */
    
    struct {
      __I  uint8_t   RESERVED71;
      __I  uint8_t   RESERVED72;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL12;           /*!< USB Transmit Control and Status Endpoint 12 Low                       */
        __IO uint8_t   TXCSRL12;                    /*!< USB Transmit Control and Status Endpoint 12 Low                       */
      } ;
      __IO uint8_t   TXCSRH12;                      /*!< USB Transmit Control and Status Endpoint 12 High                      */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP12;                        /*!< USB Maximum Receive Data Endpoint 12                                  */
    
    struct {
      __I  uint8_t   RESERVED73;
      __I  uint8_t   RESERVED74;
      __IO uint8_t   RXCSRL12;                      /*!< USB Receive Control and Status Endpoint 12 Low                        */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH12;           /*!< USB Receive Control and Status Endpoint 12 High                       */
        __IO uint8_t   RXCSRH12;                    /*!< USB Receive Control and Status Endpoint 12 High                       */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT12;                         /*!< USB Receive Byte Count Endpoint 12                                    */
  __I  uint16_t  RESERVED75[3];
  
  union {
    __IO uint16_t  TXMAXP13;                        /*!< USB Maximum Transmit Data Endpoint 13                                 */
    
    struct {
      __I  uint8_t   RESERVED76;
      __I  uint8_t   RESERVED77;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL13;           /*!< USB Transmit Control and Status Endpoint 13 Low                       */
        __IO uint8_t   TXCSRL13;                    /*!< USB Transmit Control and Status Endpoint 13 Low                       */
      } ;
      __IO uint8_t   TXCSRH13;                      /*!< USB Transmit Control and Status Endpoint 13 High                      */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP13;                        /*!< USB Maximum Receive Data Endpoint 13                                  */
    
    struct {
      __I  uint8_t   RESERVED78;
      __I  uint8_t   RESERVED79;
      __IO uint8_t   RXCSRL13;                      /*!< USB Receive Control and Status Endpoint 13 Low                        */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH13;           /*!< USB Receive Control and Status Endpoint 13 High                       */
        __IO uint8_t   RXCSRH13;                    /*!< USB Receive Control and Status Endpoint 13 High                       */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT13;                         /*!< USB Receive Byte Count Endpoint 13                                    */
  __I  uint16_t  RESERVED80[3];
  
  union {
    __IO uint16_t  TXMAXP14;                        /*!< USB Maximum Transmit Data Endpoint 14                                 */
    
    struct {
      __I  uint8_t   RESERVED81;
      __I  uint8_t   RESERVED82;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL14;           /*!< USB Transmit Control and Status Endpoint 14 Low                       */
        __IO uint8_t   TXCSRL14;                    /*!< USB Transmit Control and Status Endpoint 14 Low                       */
      } ;
      __IO uint8_t   TXCSRH14;                      /*!< USB Transmit Control and Status Endpoint 14 High                      */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP14;                        /*!< USB Maximum Receive Data Endpoint 14                                  */
    
    struct {
      __I  uint8_t   RESERVED83;
      __I  uint8_t   RESERVED84;
      __IO uint8_t   RXCSRL14;                      /*!< USB Receive Control and Status Endpoint 14 Low                        */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH14;           /*!< USB Receive Control and Status Endpoint 14 High                       */
        __IO uint8_t   RXCSRH14;                    /*!< USB Receive Control and Status Endpoint 14 High                       */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT14;                         /*!< USB Receive Byte Count Endpoint 14                                    */
  __I  uint16_t  RESERVED85[3];
  
  union {
    __IO uint16_t  TXMAXP15;                        /*!< USB Maximum Transmit Data Endpoint 15                                 */
    
    struct {
      __I  uint8_t   RESERVED86;
      __I  uint8_t   RESERVED87;
      
      union {
        __IO uint8_t   USB0_ALT_TXCSRL15;           /*!< USB Transmit Control and Status Endpoint 15 Low                       */
        __IO uint8_t   TXCSRL15;                    /*!< USB Transmit Control and Status Endpoint 15 Low                       */
      } ;
      __IO uint8_t   TXCSRH15;                      /*!< USB Transmit Control and Status Endpoint 15 High                      */
    } ;
  } ;
  
  union {
    __IO uint16_t  RXMAXP15;                        /*!< USB Maximum Receive Data Endpoint 15                                  */
    
    struct {
      __I  uint8_t   RESERVED88;
      __I  uint8_t   RESERVED89;
      __IO uint8_t   RXCSRL15;                      /*!< USB Receive Control and Status Endpoint 15 Low                        */
      
      union {
        __IO uint8_t   USB0_ALT_RXCSRH15;           /*!< USB Receive Control and Status Endpoint 15 High                       */
        __IO uint8_t   RXCSRH15;                    /*!< USB Receive Control and Status Endpoint 15 High                       */
      } ;
    } ;
  } ;
  __IO uint16_t  RXCOUNT15;                         /*!< USB Receive Byte Count Endpoint 15                                    */
  __I  uint16_t  RESERVED90[163];
  __IO uint16_t  RXDPKTBUFDIS;                      /*!< USB Receive Double Packet Buffer Disable                              */
  __IO uint16_t  TXDPKTBUFDIS;                      /*!< USB Transmit Double Packet Buffer Disable                             */
  __I  uint32_t  RESERVED91[51];
  __IO uint32_t  DRRIS;                             /*!< USB Device RESUME Raw Interrupt Status                                */
  __IO uint32_t  DRIM;                              /*!< USB Device RESUME Interrupt Mask                                      */
  __IO uint32_t  DRISC;                             /*!< USB Device RESUME Interrupt Status and Clear                          */
  __I  uint32_t  RESERVED92[13];
  __IO uint32_t  DMASEL;                            /*!< USB DMA Select                                                        */
} USB0_Type;


/* ================================================================================ */
/* ================                       HIB                      ================ */
/* ================================================================================ */


/**
  * @brief Register map for HIB peripheral (HIB)
  */

typedef struct {                                    /*!< HIB Structure                                                         */
  __IO uint32_t  RTCC;                              /*!< Hibernation RTC Counter                                               */
  __IO uint32_t  RTCM0;                             /*!< Hibernation RTC Match 0                                               */
  __IO uint32_t  RTCM1;                             /*!< Hibernation RTC Match 1                                               */
  __IO uint32_t  RTCLD;                             /*!< Hibernation RTC Load                                                  */
  __IO uint32_t  CTL;                               /*!< Hibernation Control                                                   */
  __IO uint32_t  IM;                                /*!< Hibernation Interrupt Mask                                            */
  __IO uint32_t  RIS;                               /*!< Hibernation Raw Interrupt Status                                      */
  __IO uint32_t  MIS;                               /*!< Hibernation Masked Interrupt Status                                   */
  __IO uint32_t  IC;                                /*!< Hibernation Interrupt Clear                                           */
  __IO uint32_t  RTCT;                              /*!< Hibernation RTC Trim                                                  */
  __I  uint32_t  RESERVED0[2];
  __IO uint32_t  DATA;                              /*!< Hibernation Data                                                      */
} HIB_Type;


/* ================================================================================ */
/* ================                   FLASH_CTRL                   ================ */
/* ================================================================================ */


/**
  * @brief Register map for FLASH_CTRL peripheral (FLASH_CTRL)
  */

typedef struct {                                    /*!< FLASH_CTRL Structure                                                  */
  __IO uint32_t  FMA;                               /*!< Flash Memory Address                                                  */
  __IO uint32_t  FMD;                               /*!< Flash Memory Data                                                     */
  __IO uint32_t  FMC;                               /*!< Flash Memory Control                                                  */
  __IO uint32_t  FCRIS;                             /*!< Flash Controller Raw Interrupt Status                                 */
  __IO uint32_t  FCIM;                              /*!< Flash Controller Interrupt Mask                                       */
  __IO uint32_t  FCMISC;                            /*!< Flash Controller Masked Interrupt Status and Clear                    */
  __I  uint32_t  RESERVED0[2];
  __IO uint32_t  FMC2;                              /*!< Flash Memory Control 2                                                */
  __I  uint32_t  RESERVED1[3];
  __IO uint32_t  FWBVAL;                            /*!< Flash Write Buffer Valid                                              */
  __I  uint32_t  RESERVED2[49];
  __IO uint32_t  FCTL;                              /*!< Flash Control                                                         */
  __I  uint32_t  RESERVED3;
  __IO uint32_t  FWBN;                              /*!< Flash Write Buffer n                                                  */
  __I  uint32_t  RESERVED4[1019];
  __IO uint32_t  RMCTL;                             /*!< ROM Control                                                           */
  __I  uint32_t  RESERVED5[55];
  
  union {
    __IO uint32_t  BOOTCFG;                         /*!< Boot Configuration                                                    */
    __IO uint32_t  FLASH_ALT_USERDBG;               /*!< User Debug                                                            */
  } ;
  __I  uint32_t  RESERVED6[3];
  __IO uint32_t  USERREG0;                          /*!< User Register 0                                                       */
  __IO uint32_t  USERREG1;                          /*!< User Register 1                                                       */
  __IO uint32_t  USERREG2;                          /*!< User Register 2                                                       */
  __IO uint32_t  USERREG3;                          /*!< User Register 3                                                       */
  __I  uint32_t  RESERVED7[4];
  __IO uint32_t  FMPRE0;                            /*!< Flash Memory Protection Read Enable 0                                 */
  __IO uint32_t  FMPRE1;                            /*!< Flash Memory Protection Read Enable 1                                 */
  __IO uint32_t  FMPRE2;                            /*!< Flash Memory Protection Read Enable 2                                 */
  __IO uint32_t  FMPRE3;                            /*!< Flash Memory Protection Read Enable 3                                 */
  __I  uint32_t  RESERVED8[124];
  __IO uint32_t  FMPPE0;                            /*!< Flash Memory Protection Program Enable 0                              */
  __IO uint32_t  FMPPE1;                            /*!< Flash Memory Protection Program Enable 1                              */
  __IO uint32_t  FMPPE2;                            /*!< Flash Memory Protection Program Enable 2                              */
  __IO uint32_t  FMPPE3;                            /*!< Flash Memory Protection Program Enable 3                              */
} FLASH_CTRL_Type;


/* ================================================================================ */
/* ================                     SYSCTL                     ================ */
/* ================================================================================ */


/**
  * @brief Register map for SYSCTL peripheral (SYSCTL)
  */

typedef struct {                                    /*!< SYSCTL Structure                                                      */
  __IO uint32_t  DID0;                              /*!< Device Identification 0                                               */
  __IO uint32_t  DID1;                              /*!< Device Identification 1                                               */
  __IO uint32_t  DC0;                               /*!< Device Capabilities 0                                                 */
  __I  uint32_t  RESERVED0;
  __IO uint32_t  DC1;                               /*!< Device Capabilities 1                                                 */
  __IO uint32_t  DC2;                               /*!< Device Capabilities 2                                                 */
  __IO uint32_t  DC3;                               /*!< Device Capabilities 3                                                 */
  __IO uint32_t  DC4;                               /*!< Device Capabilities 4                                                 */
  __IO uint32_t  DC5;                               /*!< Device Capabilities 5                                                 */
  __IO uint32_t  DC6;                               /*!< Device Capabilities 6                                                 */
  __IO uint32_t  DC7;                               /*!< Device Capabilities 7                                                 */
  __IO uint32_t  DC8;                               /*!< Device Capabilities 8 ADC Channels                                    */
  __IO uint32_t  PBORCTL;                           /*!< Brown-Out Reset Control                                               */
  __I  uint32_t  RESERVED1[3];
  __IO uint32_t  SRCR0;                             /*!< Software Reset Control 0                                              */
  __IO uint32_t  SRCR1;                             /*!< Software Reset Control 1                                              */
  __IO uint32_t  SRCR2;                             /*!< Software Reset Control 2                                              */
  __I  uint32_t  RESERVED2;
  __IO uint32_t  RIS;                               /*!< Raw Interrupt Status                                                  */
  __IO uint32_t  IMC;                               /*!< Interrupt Mask Control                                                */
  __IO uint32_t  MISC;                              /*!< Masked Interrupt Status and Clear                                     */
  __IO uint32_t  RESC;                              /*!< Reset Cause                                                           */
  __IO uint32_t  RCC;                               /*!< Run-Mode Clock Configuration                                          */
  __IO uint32_t  PLLCFG;                            /*!< XTAL to PLL Translation                                               */
  __I  uint32_t  RESERVED3;
  __IO uint32_t  GPIOHBCTL;                         /*!< GPIO High-Performance Bus Control                                     */
  __IO uint32_t  RCC2;                              /*!< Run-Mode Clock Configuration 2                                        */
  __I  uint32_t  RESERVED4[2];
  __IO uint32_t  MOSCCTL;                           /*!< Main Oscillator Control                                               */
  __I  uint32_t  RESERVED5[32];
  __IO uint32_t  RCGC0;                             /*!< Run Mode Clock Gating Control Register 0                              */
  __IO uint32_t  RCGC1;                             /*!< Run Mode Clock Gating Control Register 1                              */
  __IO uint32_t  RCGC2;                             /*!< Run Mode Clock Gating Control Register 2                              */
  __I  uint32_t  RESERVED6;
  __IO uint32_t  SCGC0;                             /*!< Sleep Mode Clock Gating Control Register 0                            */
  __IO uint32_t  SCGC1;                             /*!< Sleep Mode Clock Gating Control Register 1                            */
  __IO uint32_t  SCGC2;                             /*!< Sleep Mode Clock Gating Control Register 2                            */
  __I  uint32_t  RESERVED7;
  __IO uint32_t  DCGC0;                             /*!< Deep Sleep Mode Clock Gating Control Register 0                       */
  __IO uint32_t  DCGC1;                             /*!< Deep-Sleep Mode Clock Gating Control Register 1                       */
  __IO uint32_t  DCGC2;                             /*!< Deep Sleep Mode Clock Gating Control Register 2                       */
  __I  uint32_t  RESERVED8[6];
  __IO uint32_t  DSLPCLKCFG;                        /*!< Deep Sleep Clock Configuration                                        */
  __I  uint32_t  RESERVED9[2];
  __IO uint32_t  PIOSCCAL;                          /*!< Precision Internal Oscillator Calibration                             */
  __IO uint32_t  PIOSCSTAT;                         /*!< Precision Internal Oscillator Statistics                              */
  __I  uint32_t  RESERVED10[14];
  __IO uint32_t  DC9;                               /*!< Device Capabilities 9 ADC Digital Comparators                         */
  __I  uint32_t  RESERVED11[3];
  __IO uint32_t  NVMSTAT;                           /*!< Non-Volatile Memory Information                                       */
} SYSCTL_Type;


/* ================================================================================ */
/* ================                      UDMA                      ================ */
/* ================================================================================ */


/**
  * @brief Register map for UDMA peripheral (UDMA)
  */

typedef struct {                                    /*!< UDMA Structure                                                        */
  __IO uint32_t  STAT;                              /*!< DMA Status                                                            */
  __O  uint32_t  CFG;                               /*!< DMA Configuration                                                     */
  __IO uint32_t  CTLBASE;                           /*!< DMA Channel Control Base Pointer                                      */
  __IO uint32_t  ALTBASE;                           /*!< DMA Alternate Channel Control Base Pointer                            */
  __IO uint32_t  WAITSTAT;                          /*!< DMA Channel Wait-on-Request Status                                    */
  __O  uint32_t  SWREQ;                             /*!< DMA Channel Software Request                                          */
  __IO uint32_t  USEBURSTSET;                       /*!< DMA Channel Useburst Set                                              */
  __O  uint32_t  USEBURSTCLR;                       /*!< DMA Channel Useburst Clear                                            */
  __IO uint32_t  REQMASKSET;                        /*!< DMA Channel Request Mask Set                                          */
  __O  uint32_t  REQMASKCLR;                        /*!< DMA Channel Request Mask Clear                                        */
  __IO uint32_t  ENASET;                            /*!< DMA Channel Enable Set                                                */
  __O  uint32_t  ENACLR;                            /*!< DMA Channel Enable Clear                                              */
  __IO uint32_t  ALTSET;                            /*!< DMA Channel Primary Alternate Set                                     */
  __O  uint32_t  ALTCLR;                            /*!< DMA Channel Primary Alternate Clear                                   */
  __IO uint32_t  PRIOSET;                           /*!< DMA Channel Priority Set                                              */
  __O  uint32_t  PRIOCLR;                           /*!< DMA Channel Priority Clear                                            */
  __I  uint32_t  RESERVED0[3];
  __IO uint32_t  ERRCLR;                            /*!< DMA Bus Error Clear                                                   */
  __I  uint32_t  RESERVED1[300];
  __IO uint32_t  CHASGN;                            /*!< DMA Channel Assignment                                                */
} UDMA_Type;


/* --------------------  End of section using anonymous unions  ------------------- */
#if defined(__CC_ARM)
  #pragma pop
#elif defined(__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning restore
#else
  #warning Not supported compiler type
#endif




/* ================================================================================ */
/* ================              Peripheral memory map             ================ */
/* ================================================================================ */

#define WATCHDOG0_BASE                  0x40000000UL
#define WATCHDOG1_BASE                  0x40001000UL
#define GPIOA_BASE                      0x40004000UL
#define GPIOB_BASE                      0x40005000UL
#define GPIOC_BASE                      0x40006000UL
#define GPIOD_BASE                      0x40007000UL
#define SSI0_BASE                       0x40008000UL
#define SSI1_BASE                       0x40009000UL
#define UART0_BASE                      0x4000C000UL
#define UART1_BASE                      0x4000D000UL
#define UART2_BASE                      0x4000E000UL
#define I2C0_BASE                       0x40020000UL
#define I2C1_BASE                       0x40021000UL
#define GPIOE_BASE                      0x40024000UL
#define PWM0_BASE                       0x40028000UL
#define QEI0_BASE                       0x4002C000UL
#define TIMER0_BASE                     0x40030000UL
#define TIMER1_BASE                     0x40031000UL
#define TIMER2_BASE                     0x40032000UL
#define ADC0_BASE                       0x40038000UL
#define ADC1_BASE                       0x40039000UL
#define COMP_BASE                       0x4003C000UL
#define CAN0_BASE                       0x40040000UL
#define USB0_BASE                       0x40050000UL
#define GPIOA_AHB_BASE                  0x40058000UL
#define GPIOB_AHB_BASE                  0x40059000UL
#define GPIOC_AHB_BASE                  0x4005A000UL
#define GPIOD_AHB_BASE                  0x4005B000UL
#define GPIOE_AHB_BASE                  0x4005C000UL
#define HIB_BASE                        0x400FC000UL
#define FLASH_CTRL_BASE                 0x400FD000UL
#define SYSCTL_BASE                     0x400FE000UL
#define UDMA_BASE                       0x400FF000UL


/* ================================================================================ */
/* ================             Peripheral declaration             ================ */
/* ================================================================================ */

#define WATCHDOG0                       ((WATCHDOG0_Type          *) WATCHDOG0_BASE)
#define WATCHDOG1                       ((WATCHDOG0_Type          *) WATCHDOG1_BASE)
#define GPIOA                           ((GPIOA_Type              *) GPIOA_BASE)
#define GPIOB                           ((GPIOA_Type              *) GPIOB_BASE)
#define GPIOC                           ((GPIOA_Type              *) GPIOC_BASE)
#define GPIOD                           ((GPIOA_Type              *) GPIOD_BASE)
#define SSI0                            ((SSI0_Type               *) SSI0_BASE)
#define SSI1                            ((SSI0_Type               *) SSI1_BASE)
#define UART0                           ((UART0_Type              *) UART0_BASE)
#define UART1                           ((UART0_Type              *) UART1_BASE)
#define UART2                           ((UART0_Type              *) UART2_BASE)
#define I2C0                            ((I2C0_Type               *) I2C0_BASE)
#define I2C1                            ((I2C0_Type               *) I2C1_BASE)
#define GPIOE                           ((GPIOA_Type              *) GPIOE_BASE)
#define PWM0                            ((PWM0_Type               *) PWM0_BASE)
#define QEI0                            ((QEI0_Type               *) QEI0_BASE)
#define TIMER0                          ((TIMER0_Type             *) TIMER0_BASE)
#define TIMER1                          ((TIMER0_Type             *) TIMER1_BASE)
#define TIMER2                          ((TIMER0_Type             *) TIMER2_BASE)
#define ADC0                            ((ADC0_Type               *) ADC0_BASE)
#define ADC1                            ((ADC0_Type               *) ADC1_BASE)
#define COMP                            ((COMP_Type               *) COMP_BASE)
#define CAN0                            ((CAN0_Type               *) CAN0_BASE)
#define USB0                            ((USB0_Type               *) USB0_BASE)
#define GPIOA_AHB                       ((GPIOA_Type              *) GPIOA_AHB_BASE)
#define GPIOB_AHB                       ((GPIOA_Type              *) GPIOB_AHB_BASE)
#define GPIOC_AHB                       ((GPIOA_Type              *) GPIOC_AHB_BASE)
#define GPIOD_AHB                       ((GPIOA_Type              *) GPIOD_AHB_BASE)
#define GPIOE_AHB                       ((GPIOA_Type              *) GPIOE_AHB_BASE)
#define HIB                             ((HIB_Type                *) HIB_BASE)
#define FLASH_CTRL                      ((FLASH_CTRL_Type         *) FLASH_CTRL_BASE)
#define SYSCTL                          ((SYSCTL_Type             *) SYSCTL_BASE)
#define UDMA                            ((UDMA_Type               *) UDMA_BASE)


/** @} */ /* End of group Device_Peripheral_Registers */
/** @} */ /* End of group LM3S5T36 */
/** @} */ /* End of group TI */

#ifdef __cplusplus
}
#endif


#endif  /* LM3S5T36_H */


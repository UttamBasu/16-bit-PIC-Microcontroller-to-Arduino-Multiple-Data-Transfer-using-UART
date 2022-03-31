/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.170.0
        Device            :  PIC24FJ512GU410
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.61
        MPLAB 	          :  MPLAB X v5.45
 */

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
 */

/**
  Section: Included Files
 */
#include "mcc_generated_files/system.h"
#include "string.h"

/*
                         Main application
 */

int data1 = 0;
float data2 = 0.265846;
float data3 = 0.565435;
float data4 = 0.125656;
float data5 = 0.58465;
float data6 = 23.5646;
float data7 = 45.464;
float data8 = 785.25;
float data9 = 2.5656;
float data10 = 1000.23;
float data11 = 45.2545;
float data12 = 465.265;
float data13 = 54656.25;


char buff[10];

void Send1(void) 
{
    data1 = data1 + 1;

    if(data1 <10)
    {
    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%d", data1);

    UART1_Write(buff[0]);
    UART1_Write('A');
    }
    
    else if (data1 >=10 && data1<100 )
    {
    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%d", data1);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write('A');
    }
    else if (data1 >=100 && data1 < 1000 )
    {
    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%d", data1);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write('A');
    }
}

void Send2(void) 
{
    data2 = data2 + 2.5;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data2);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('B');
}

void Send3(void) 
{
    data3 = data3 + 4.5;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data3);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('C');
}

void Send4(void) 
{
    data4 = data4 + 0.025;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data4);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('D');
}

void Send5(void) 
{
    data5 = data5 + 2.5;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data5);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('E');
}

void Send6(void) 
{
    data6 = data6 + 25;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data6);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('F');
}

void Send7(void) 
{
    data7 = data7 + 5.025;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data7);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('G');
}

void Send8(void) 
{
    data8 = data8 + 20.25;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data8);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('H');
}


void Send9(void) 
{
    data9 = data9 + 0.0255;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data9);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('I');
}


void Send10(void) 
{
    data10 = data10 + 120;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data10);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('J');
}


void Send11(void) 
{
    data11 = data11 + 1.2355;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data11);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('K');
}

void Send12(void) 
{
    data12 = data12 + 5;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data12);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    UART1_Write('L');
}

void Send13(void) 
{
    data13 = data13 + 222.5;

    memset(buff, ' ', sizeof (buff));
    sprintf(buff, "%.7f", data13);

    UART1_Write(buff[0]);
    UART1_Write(buff[1]);
    UART1_Write(buff[2]);
    UART1_Write(buff[3]);
    UART1_Write(buff[4]);
    UART1_Write(buff[5]);
    UART1_Write(buff[6]);
    UART1_Write(buff[7]);
    UART1_Write(buff[8]);
    //UART1_Write('M');
}


//All data will send here combined
void Pulse(void) 
{
    Send1();
    Send2();
    Send3();
    Send4();
    Send5();
    Send6();
    Send7();
    Send8();
    Send9();
    Send10();
    Send11();
    Send12();
    Send13();
    UART1_Write('\n');
}

int main(void) 
{
    // initialize the device
    SYSTEM_Initialize();
    TMR1_SetInterruptHandler(Pulse); //TMR 1 gives 1 second time. use for delay in LED Display
    TMR1_Start();
    UART1_Initialize();
    while (1) 
    {

    }
    return 1;
}
/**
 End of File
 */


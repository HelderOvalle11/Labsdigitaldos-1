/*
 * File:   lab2.c
 * Author: Helder Ovalle
 *
 * Created on 31 de enero de 2021, 10:24 PM
 */

//******************************************************************************
// Importación de librerías
//******************************************************************************
#include <xc.h>

//******************************************************************************
// Palabra de configuración
//******************************************************************************
// CONFIG1
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator: Crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown Out Reset Selection bits (BOR disabled)
#pragma config IESO = OFF       // Internal External Switchover bit (Internal/External Switchover mode is disabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

//******************************************************************************
// Variables
//******************************************************************************
#define _XTAL_FREQ  8000000
unsigned char conta = 0; 
unsigned char LED_VERDE = 0;
//******************************************************************************
// Prototipos de funciones
//******************************************************************************

//******************************************************************************
// Ciclo principal
//******************************************************************************
void main(void) {
    //**************************************************************************
    // Loop principal
    //**************************************************************************
    while (1) {
        if (PORTAbits.RA0 == 0){ 
            __delay_ms(50);
            if (PORTAbits.RA0 == 1) { 
                
            }
        }
        if (PORTAbits.RA1 == 0){ 
            __delay_ms(50);
            if (PORTAbits.RA1 == 1) { 
                
            }
        }
    }
}    
//******************************************************************************
// Configuración
//******************************************************************************

//******************************************************************************
// Funciones
//******************************************************************************
void contadodr (void){
    while (conta == 1);{
        if (PORTB == 0){
            LED_VERDE = 0b00000001;
                PORTB = LED_VERDE;
            }
                else if (PORTB != 0){
                LED_VERDE = LED_VERDE*2;
                PORTB = LED_VERDE; 
    }
}
        
}


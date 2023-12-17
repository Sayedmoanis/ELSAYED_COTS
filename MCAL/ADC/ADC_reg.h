#ifndef ADC_REG_H
#define ADC_REG_H

#define ADMUX          *((volatile uint8*)0x27) /*ADC MULTIPLXER SELECTOIN REGISTER*/
#define ADMUX_REFS1    7u                       /*refernce selection bit1*/
#define ADMUX_REFS1    6u                       /*refernce selection bit0*/
#define ADMUX_ADLAR    5u                       /*left adjust result*/

#define ADCSRA         *((volatile uint8*)0x26) /*ADC CONTROL AND STATUS REGISTER*/
#define ADCSRA_ADEN    7u                       /*ENABLE*/
#define ADCSRA_ADSC    6u                       /*start conversion*/
#define ADCSRA_ADATE   5u                       /*auto trigger enable*/ 
#define ADCSRA_ADIF    4u                       /*interrupt flag*/
#define ADCSRA_ADAIE   3u                       /*interrupt enable*/

#define ADCH           *((volatile uint8*)0x25)    /*ADC DATA HIGH REGISTER*/
#define ADCL           *((volatile uint8*)0x24)    /*ADC DATA LOW REGISTER*/
#define ADC            *((volatile uint16*)0x24)





#endif
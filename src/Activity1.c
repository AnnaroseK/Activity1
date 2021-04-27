/*
 */

#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"

int LED(void)
{   DDRB |= (1<<PB0);
    DDRD &= ~(1<<PD0);
    DDRD &= ~(1<<PD4);
    PORTD |= (1<<PD0);
    PORTD |= (1<<PD4);
    // Insert code

    while(1){
        if(!(PIND & (1<<PD0))&&(!(PIND & (1<<PD4)))){
            PORTB |= (1<<PB0);
            _delay_ms(2000);
        }
        else{
            PORTB &= ~(1<<PB0);
            _delay_ms(2000);
        }
    }

    return 0;
}

/*
 */

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    DDRB|=(1<<PB1);
    DDRD&=~(1<<PD0);
    //DDRD&=~(1<<PD1);
    PORTD|=(1<<PD0);
    PORTD|=(1<<PD1);


    while(1)
    {
        if(!(PIND&(1<<PD0)))
        {
            if(!(PIND&(1<<PD1)))
            {
                PORTB|=(1<<PB1);
            }
        }
        else
        {
            PORTB&=~(1<<PB1);
        }
    }

    return 0;
}

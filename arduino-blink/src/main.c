#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRB |= (1 << 5); 
	while(1){
		PORTB |= (1 << 5); 
		_delay_ms(50); 
		PORTB &= ~(1 << 5); 
		_delay_ms(50); 
	}
	return 0; 
}

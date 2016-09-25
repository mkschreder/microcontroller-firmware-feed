#include <stm32f10x.h>
#include <stm32f10x_rcc.h>
#include <stm32f10x_flash.h>
#include "uart.h"
#include "gpio.h"
#include <stdio.h>

int write(int file, char *ptr, int len){
	uart_putc(0, 'W'); 
	while(len--) uart_putc(0, *(ptr++)); 
	return len; 
}

int open(const char *name, int flags, int mode){
	uart_putc(0, 'O'); 
	return 10; 
}

int main(void){
	gpio_init_default(); 
	uart_init(0, 57600); 

	uart_putc(0, 'A'); 

	char *str = "\nHello World!\n"; 
	for(int c = 0; c < strlen(str); c++){
		uart_putc(0, str[c]); 
	}
	//FILE *f = fopen("foo", "r"); 
	//write(f, "test", 4); 
	while(1) uart_putc(0, 'A'); 
	//uart_putc(0, 'A'); 	
	return 0; 
}

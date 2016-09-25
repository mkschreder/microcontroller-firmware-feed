#pragma once

#include <stdint.h>

typedef uint16_t gpio_pin_t; 

enum {
	GPIO_PA0,
	GPIO_PA1,
	GPIO_PA2,
	GPIO_PA3,
	GPIO_PA4,
	GPIO_PA5,
	GPIO_PA6,
	GPIO_PA7,
	GPIO_PA8,
	GPIO_PA9,
	GPIO_PA10,
	GPIO_PA11,
	GPIO_PA12,
	GPIO_PA13,
	GPIO_PA14,
	GPIO_PA15,
	GPIO_PB0,
	GPIO_PB1,
	GPIO_PB2,
	GPIO_PB3,
	GPIO_PB4,
	GPIO_PB5,
	GPIO_PB6,
	GPIO_PB7,
	GPIO_PB8,
	GPIO_PB9,
	GPIO_PB10,
	GPIO_PB11,
	GPIO_PB12,
	GPIO_PB13,
	GPIO_PB14,
	GPIO_PB15,
	GPIO_PC0,
	GPIO_PC1,
	GPIO_PC2,
	GPIO_PC3,
	GPIO_PC4,
	GPIO_PC5,
	GPIO_PC6,
	GPIO_PC7,
	GPIO_PC8,
	GPIO_PC9,
	GPIO_PC10,
	GPIO_PC11,
	GPIO_PC12,
	GPIO_PC13,
	GPIO_PC14,
	GPIO_PC15,
	GPIO_PD0,
	GPIO_PD1,
	GPIO_PD2,
	GPIO_PD3,
	GPIO_PD4,
	GPIO_PD5,
	GPIO_PD6,
	GPIO_PD7,
	GPIO_PD8,
	GPIO_PD9,
	GPIO_PD10,
	GPIO_PD11,
	GPIO_PD12,
	GPIO_PD13,
	GPIO_PD14,
	GPIO_PD15,
	GPIO_COUNT
}; 

void gpio_init_default(void); 

void gpio_configure(gpio_pin_t pin, uint16_t flags); 

#define gpio_write_word(addr, value) ((void)(addr), (void)(value), 0)
#define gpio_read_word(addr, value) ((void)(addr), (void)(value), 0)
void gpio_write_pin(gpio_pin_t pin, uint8_t val); 
uint8_t gpio_read_pin(gpio_pin_t pin); 

// GPIO pin functions                   
enum {  
    /// configures a gpio pin as input  
    GP_INPUT        = (1 << 0),         
    /// configures a gpio pin as output 
    GP_OUTPUT   = (1 << 1),             
    /// enables pull(up/down) on gpio pin
    //GP_PULL       = (1 << 2),         
    /// no pullup on gpio pin           
    GP_HIZ          = (1 << 3),         
    /// enable pullup                   
    GP_PULLUP   = (1 << 4),             
    /// enable pulldown (if arch supports it)
    GP_PULLDOWN = (1 << 5),             
    /// alternative function on the pin 
    GP_AF           = (1 << 6),         
    /// output open drain mode          
    GP_OPEN_DRAIN       = (1 << 7),     
    /// push pull output                
    GP_PUSH_PULL    = (1 << 8),         
    /// analog input                    
    GP_ANALOG   = (1 << 9)
};  
    
/// pin change interrupt will run when pin gets toggled
/// make sure that pin change handler is defined
#define GP_PCINT        (1 << 3)

// GPIO status flags
/// gpio status: pin level has changed  
#define GP_CHANGED      (1 << 0)
/// gpio status: pin went high
#define GP_WENT_HIGH    (GP_CHANGED | (1 << 1))
/// gpio status: pin went low
#define GP_WENT_LOW     (GP_CHANGED | (1 << 2))

void gpio_init(void);

#define gpio_set(pin) gpio_write_pin(pin, 1)
#define gpio_clear(pin) gpio_write_pin(pin, 0)


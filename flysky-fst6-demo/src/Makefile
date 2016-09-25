CFLAGS+=$(shell pkg-config --cflags libstm32f10x_md_vl)
LDFLAGS+=$(shell pkg-config --libs libstm32f10x_md_vl) -lutype -lc

SOURCES:=main.c gpio.c uart.c 

flysky-fst6-demo.bin: 
	$(CC) $(CFLAGS) $(SOURCES) -o flysky-fst6-demo.bin $(LDFLAGS)

all: flysky-fst6-demo.bin
	;

#
# Copyright (C) 2016 Martin K. Schröder <mkschreder.uk@gmail.com>
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#
include $(TOPDIR)/rules.mk

ARCH:=avr
BOARD:=arduino-promini
BOARDNAME:=Arduino Pro Mini 16Mhz (AVR ATMega328p)
MAINTAINER:=Martin Schröder <mkschreder.uk@gmail.com>
CPU_TYPE:=atmega328p

#CFLAGS:=-Os -mmcu=atmega328p -DF_CPU=16000000UL -B$(TOOLCHAIN_DIR)/lib/avr5/
#LDFLAGS:=-L$(TOOLCHAIN_DIR)/lib/avr5/

include $(INCLUDE_DIR)/target.mk

define Target/Description
	Build firmware images for avr microcontroller
endef

$(eval $(call BuildTarget))


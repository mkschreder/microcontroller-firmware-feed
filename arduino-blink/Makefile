# Copyright (c) 2016 Martin K. Schröder

include $(TOPDIR)/rules.mk

PKG_NAME:=arduino-blink
PKG_RELEASE:=1
PKG_VERSION=1.13.0

include $(INCLUDE_DIR)/package.mk

ifeq ($(BOARD),arduino-promini)
	TARGET_CFLAGS+=-mmcu=atmega328p -DF_CPU=16000000UL -B$(TOOLCHAIN_ROOT_DIR)/lib/avr5/
endif
#TARGET_CFLAGS:=-mmcu=atmega328p -B$(TOOLCHAIN_DIR)/lib/avr5/
#TARGET_LDFLAGS:=-L$(TOOLCHAIN_DIR)/lib/avr5/

define Package/arduino-blink
	SECTION:=examples
	CATEGORY:=Examples
	TITLE:=Blink
	DEPENDS:=@avr
endef

define Package/arduino-blink/description
	Blink example for arduino
endef

define Package/arduino-blink/install
	echo "arduino-blink install"
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

define Build/Compile
	$(TARGET_CC) $(PKG_BUILD_DIR)/main.c $(TARGET_CFLAGS) -o $(PKG_BUILD_DIR)/blink.bin $(TARGET_LDFLAGS)
endef

$(eval $(call BuildPackage,arduino-blink))


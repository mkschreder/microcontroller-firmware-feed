# Copyright (c) 2016 Martin K. Schröder

include $(TOPDIR)/rules.mk

PKG_NAME:=art6
PKG_RELEASE:=1

PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=https://github.com/mkschreder/ar-t6.git
PKG_SOURCE_VERSION:=dc7fc9d3713296c28a08df62021aa33ff690153e
PKG_VERSION=1.0.0-$(PKG_SOURCE_VERSION)
PKG_SOURCE:=$(PKG_NAME)-$(PKG_SOURCE_VERSION).tar.gz
PKG_SOURCE_SUBDIR:=$(PKG_NAME)-$(PKG_VERSION)

PKG_INSTALL:=1
PKG_FIXUP=autoreconf -fi

include $(INCLUDE_DIR)/package.mk

define Package/art6
  SECTION:=firmwares
  CATEGORY:=Firmwares
  TITLE:=AR-T6 Firmware
  URL:=https://github.com/mkschreder/art6.git
  DEPENDS:=@TARGET_flysky_fst6 +libstm32
endef

define Package/art6/description
	AR-T6 firmware for FS-T6 rc control
endef

define Package/art6/install
	arm-none-eabi-size --format=berkley $(PKG_BUILD_DIR)/firmware/ar-t6-firmware 
	arm-none-eabi-objcopy -O ihex $(PKG_BUILD_DIR)/firmware/ar-t6-firmware $(BIN_DIR)/ar-t6-firmware.hex
	@echo ""
	@echo "#### Firmware is in: $(BIN_DIR)/ar-t6-firmware.hex"
	@echo ""
endef

define Build/Install 
	# art6 makefile does not have an install target
endef

$(eval $(call BuildPackage,art6))


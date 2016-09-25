# Copyright (c) 2016 Martin K. Schröder

include $(TOPDIR)/rules.mk

PKG_NAME:=flysky-fst6-demo
PKG_RELEASE:=1
PKG_VERSION=1.13.0

include $(INCLUDE_DIR)/package.mk

define Package/flysky-fst6-demo
	SECTION:=examples
	CATEGORY:=Examples
	TITLE:=FST6
	DEPENDS:=+libutype +libstm32
endef

define Package/flysky-fst6-demo/description
	
endef

define Package/flysky-fst6-demo/install
	echo "flysky-fst6-demo install"
	$(CP) $(PKG_BUILD_DIR)/flysky-fst6-demo.bin $(BIN_DIR)/
	arm-none-eabi-objcopy -j .text -j .data -O ihex $(PKG_BUILD_DIR)/flysky-fst6-demo.bin $(BIN_DIR)/flysky-fst6-demo.hex
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

$(eval $(call BuildPackage,flysky-fst6-demo))


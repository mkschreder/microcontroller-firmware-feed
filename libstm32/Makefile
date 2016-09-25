# Copyright (c) 2016 Martin K. Schröder
# used by JUCI  

include $(TOPDIR)/rules.mk

PKG_NAME:=libstm32
PKG_RELEASE:=1

PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=https://github.com/mkschreder/libstm32.git
PKG_SOURCE_VERSION:=c44f701553792f115a74a6b7da70017171079256
PKG_VERSION=1.0.0-$(PKG_SOURCE_VERSION)
PKG_SOURCE:=$(PKG_NAME)-$(PKG_SOURCE_VERSION).tar.gz
PKG_SOURCE_SUBDIR:=$(PKG_NAME)-$(PKG_VERSION)

PKG_INSTALL:=1

include $(INCLUDE_DIR)/package.mk

define Package/libstm32
  SECTION:=libs
  CATEGORY:=Libraries
  TITLE:=STM32F10x support and startup library 
  URL:=https://github.com/mkschreder/libstm32.git
  DEPENDS:=
endef

define Package/libstm32/description
	Provides startup code and soc drivers for the stm32 microcontroller. 
endef

define Build/InstallDev
	$(INSTALL_DIR) $(1)/usr/include/stm32/CMSIS
	$(INSTALL_DIR) $(1)/usr/include/stm32/f10x
	$(INSTALL_DIR) $(1)/usr/include/stm32/f30x
	$(INSTALL_DIR) $(1)/usr/include/stm32/f37x
	$(INSTALL_DIR) $(1)/usr/include/stm32/l1xx
	$(CP) $(PKG_BUILD_DIR)/src/CMSIS/*.h $(1)/usr/include/stm32/CMSIS
	$(CP) $(PKG_BUILD_DIR)/src/f10x/*.h $(1)/usr/include/stm32/f10x
	$(CP) $(PKG_BUILD_DIR)/src/f30x/*.h $(1)/usr/include/stm32/f30x
	$(CP) $(PKG_BUILD_DIR)/src/f37x/*.h $(1)/usr/include/stm32/f37x
	$(CP) $(PKG_BUILD_DIR)/src/l1xx/*.h $(1)/usr/include/stm32/l1xx
	
	$(INSTALL_DIR) $(1)/usr/lib
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libstm32*.a $(1)/usr/lib/
	$(CP) $(PKG_BUILD_DIR)/src/**/*.ld $(1)/usr/lib/

	$(INSTALL_DIR) $(1)/usr/lib/pkgconfig/
	$(CP) $(PKG_BUILD_DIR)/*.pc $(1)/usr/lib/pkgconfig/
endef

define Package/libstm32/install
endef

$(eval $(call BuildPackage,libstm32))


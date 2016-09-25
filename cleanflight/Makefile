# Copyright (c) 2016 Martin K. Schröder

include $(TOPDIR)/rules.mk

PKG_NAME:=cleanflight
PKG_RELEASE:=1

PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=https://github.com/mkschreder/cleanflight.git
PKG_SOURCE_VERSION:=aa8608a6f1da9808b8c4e25cc120793a406025e4
PKG_VERSION=1.12.0-$(PKG_SOURCE_VERSION)
PKG_SOURCE:=$(PKG_NAME)-$(PKG_SOURCE_VERSION).tar.gz
PKG_SOURCE_SUBDIR:=$(PKG_NAME)-$(PKG_VERSION)

PKG_INSTALL:=1

include $(INCLUDE_DIR)/package.mk

define Package/cleanflight
  SECTION:=firmwares
  CATEGORY:=Firmwares
  TITLE:=Cleanflight firmware
  URL:=https://github.com/mkschreder/cleanflight.git
  DEPENDS:=
endef

define Package/cleanflight/description
	Cleanflight flight controller firmware
endef

define Package/cleanflight/install
	$(CP) $(PKG_BUILD_DIR)/obj/*.hex $(BIN_DIR)/
endef

define Build/Install 
	# cleanflight makefile does not have an install target
endef

$(eval $(call BuildPackage,cleanflight))


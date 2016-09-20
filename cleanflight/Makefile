# Copyright (c) 2016 Martin K. Schröder

include $(TOPDIR)/rules.mk

PKG_NAME:=cleanflight
PKG_RELEASE:=1

PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=https://github.com/mkschreder/cleanflight.git
PKG_SOURCE_VERSION:=a77bc76ab655b5b6d5b24e2f23fda56847117e7d
PKG_VERSION=1.13.0-$(PKG_SOURCE_VERSION)
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


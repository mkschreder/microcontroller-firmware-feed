# Copyright (c) 2016 Martin K. Schröder

include $(TOPDIR)/rules.mk

PKG_NAME:=cleanflight
PKG_RELEASE:=1

PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=https://github.com/mkschreder/cleanflight.git
PKG_SOURCE_VERSION:=8fa5c88541ccd406c2fe8d1d8de0327a38cd86a6
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
	echo "cleanflight install"
	exit 1
endef

$(eval $(call BuildPackage,cleanflight))


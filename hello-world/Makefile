# Copyright (c) 2016 Martin K. Schröder

include $(TOPDIR)/rules.mk

PKG_NAME:=hello-world
PKG_RELEASE:=1

PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=https://github.com/mkschreder/hello-world.git
PKG_SOURCE_VERSION:=09646e21435d3af50b2c10816cba9cf9e9f601e5
PKG_VERSION=1.0.0-$(PKG_SOURCE_VERSION)
PKG_SOURCE:=$(PKG_NAME)-$(PKG_SOURCE_VERSION).tar.gz
PKG_SOURCE_SUBDIR:=$(PKG_NAME)-$(PKG_VERSION)

PKG_INSTALL:=1

include $(INCLUDE_DIR)/package.mk

define Package/hello-world
  SECTION:=firmwares
  CATEGORY:=Firmwares
  TITLE:=Hello World app
  URL:=https://github.com/mkschreder/hello-world.git
  DEPENDS:=
endef

define Package/hello-world/description
	Simple example that we should be able to build for all architectures 
endef

define Package/hello-world/install
	echo "hello-world install"
endef

$(eval $(call BuildPackage,hello-world))


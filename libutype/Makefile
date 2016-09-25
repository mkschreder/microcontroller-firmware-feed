# Copyright (c) 2016 Martin K. Schröder
# used by JUCI  

include $(TOPDIR)/rules.mk

PKG_NAME:=libutype
PKG_RELEASE:=1

PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=https://github.com/mkschreder/libutype.git
PKG_SOURCE_VERSION:=7915364f933454a685a238251bdb2be45a29d0cd
PKG_VERSION=2.16.09-$(PKG_SOURCE_VERSION)
PKG_SOURCE:=$(PKG_NAME)-$(PKG_SOURCE_VERSION).tar.gz
PKG_SOURCE_SUBDIR:=$(PKG_NAME)-$(PKG_VERSION)

PKG_INSTALL:=1

include $(INCLUDE_DIR)/package.mk

define Package/libutype
  SECTION:=libs
  CATEGORY:=Libraries
  TITLE:=Common C data structures
  URL:=https://github.com/mkschreder/libutype.git
  DEPENDS:=
endef

define Package/libutype/description
	This is a lightweight data structure library for C
endef

define Build/InstallDev
	$(INSTALL_DIR) $(1)/usr/include/utype/
	$(CP) $(PKG_BUILD_DIR)/src/*.h $(1)/usr/include/utype/
	
	$(INSTALL_DIR) $(1)/usr/lib
	$(CP) $(PKG_INSTALL_DIR)/usr/lib/libutype.a* $(1)/usr/lib/
endef

define Package/libutype/install

endef

$(eval $(call BuildPackage,libutype))

